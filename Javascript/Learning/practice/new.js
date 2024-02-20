let btn = document.getElementById('btn')
let nameVal = document.getElementById('text')
let emailVal = document.getElementById('email')
let msg = document.getElementById('msg')
let ul = document.getElementById('ul')


btn.addEventListener('click',()=>{
    if(nameVal.value==='' || emailVal.value===''){
        msg.innerHTML = 'Hello You'
        setTimeout(() => msg.innerHTML='',5000)
    }
    else{
        const li = document.createElement('li')
        li.appendChild(document.createTextNode(`${nameVal.value} : ${emailVal.value}`))
        ul.appendChild(li)

        nameVal.value= ''
        emailVal.value = ''
    }
})

btn.addEventListener('dblclick',()=>{
    ul.removeChild(ul.lastElementChild)
})