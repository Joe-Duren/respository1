//单击响应函数
function myClick(idStr,fun) {
    let btn = document.getElementById(idStr);
    btn.onclick = fun;
}
// 示例：
// myClick("btn01",function () {
//     alert("hello");
// });
