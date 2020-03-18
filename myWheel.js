/*根据id获取元素*/
function $(name){
    return document.getElementById(name);
}

/*获取样式*/
function getStyle(obj,attr){
    if(window.getComputedStyle){
        return getComputedStyle(obj,null)[attr];
    }else{
        return obj.currentStyle[attr];
    }
}

/*
*简化类操作
* */
//判断obj中有没有类cn
function hasClass(obj,cn) {
    var reg = new RegExp("\\b"+cn+"\\b");
    return reg.test(obj.className);
}
function addClass(obj,cn) {
    if(!hasClass(obj.cn)){
        obj.className += " "+cn;
    }
}
function removeClass(obj,cn) {
    var reg = new RegExp("\\b"+cn+"\\b");
    obj.className = obj.className.replace(reg,"");
}
//如果有cn类，则删除，如果没有，则添加
function toggleClass(obj,cn) {
    if(hasClass){
        removeClass(obj,cn);
    }else{
        addClass(obj.cn);
    }
}

/*按绝对定位的方向移动元素
*attr可以是top，left，width，height
* callback将在动画执行完毕后执行
* */
function move(obj,attr,speed,target,callback) {
    clearInterval(obj.timer);
    var current = parseInt(getStyle(obj,attr));
    if(current > target){
        speed = -speed;
    }
    obj.timer = setInterval(function () {
        var oldValue = parseInt(getStyle(obj,attr));
        var newValue = oldValue + speed;
        if(speed > 0 && newValue > target || speed<0 && newValue < target){
            newValue = target;
        }
        obj.style.left = newValue + "px";
        if(newValue === target){
            clearInterval(obj.timer);
            callback && callback();    //有回调函数才执行；没有该判断的话会传入一个undefined，而undefined不是函数，报错
        }
    },10)
}

/*创建ajax对象
*
* */
function createXMLHttpRequest() {
    var request = false;
    if (window.XMLHttpRequest) {              //对非ie浏览器
        request = new XMLHttpRequest();
        if (request.overrideMimeType) {
            request.overrideMimeType('text/xml');
        }
    } else if (window.ActiveXObject) {
        var versions = ['Microsoft.XMLHTTP', 'MSXML.XMLHTTP', 'Microsoft.XMLHTTP', 'Msxml2.XMLHTTP.7.0', 'Msxml2.XMLHTTP.6.0', 'Msxml2.XMLHTTP.5.0', 'Msxml2.XMLHTTP.4.0', 'MSXML2.XMLHTTP.3.0', 'MSXML2.XMLHTTP'];
        for (var i = 0; i < versions.legth; i++) {
            try {
                request = new ActiveXObject(versions[i]);
                if (request) {
                    return request;
                }
            } catch (e) {
                request = false;
            }
        }
    }
    return request;
}