let inp = document.getElementById('input');
let btn = document.getElementById('btn');
let sel = document.getElementById('select')

btn.addEventListener('click', () =>{
    let newOption = document.createElement('option')
    newOption.textContent = inp.value

    sel.appendChild(newOption)
    inp.value=' '
})

