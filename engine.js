// debugger;       
let lines = document.getElementsByClassName('test');
for(let i = 0; i < lines.length; i++){
    lines[i].style.display = 'none';
}
let bhide = document.getElementById('hide');
let bshow = document.getElementById('show');
let idx = -1;

bhide.addEventListener('click',function(){
    if(idx < 0){
        alert('Everything is srinked');
    }
    else{
        lines[idx].style.display = 'none';
        idx--;
    }
});
bshow.addEventListener('click',function(){
    if(idx >= lines.length-1){
        alert('Everything is extended');
    }
    else{
        idx++;
        lines[idx].style.display = 'block';
    }
});