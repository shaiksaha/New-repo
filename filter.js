let inp  = document.querySelector('.input');
let arr = [
  "Aarav", "Aarav", "Aarav", "Aarav", // 4 similar names
  "Kabir", "Meera", "Vivaan", "Diya", "Riya" // 5 different names
];

function display(arr){
    document.body.classList.add("bcont")
    let name = document.createElement("div");
    name.classList.add("name");
    document.body.appendChild(name);

    arr.forEach(function(det){
       let h = document.createElement("h1");
      h.innerText = det;
      name.appendChild(h);
    
    function updatearr(filterarr){
        name.innerHTML = "";
        filterarr.forEach(function(det){
             let h = document.createElement("h1");
          h.innerText = det;
          name.appendChild(h);
        });
    }
    inp.addEventListener("input",function(){
        let filterarr = arr.filter(function(det){
        return det.toLowerCase().startsWith(inp.value.toLowerCase());

        });
        updatearr(filterarr);
         
    });
    
    
    });
    
}
display(arr);
 