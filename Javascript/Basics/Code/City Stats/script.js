const button = document.querySelector('button')
let resultdiv = document.createElement('div')
    resultdiv.id='result'
    document.getElementById('wrapper').appendChild(resultdiv)
button.addEventListener('click',displayStats)
function displayStats(){
    const input =  document.getElementById("input")
    const city = input.options[input.selectedIndex].value
    console.log(city)
    let population=0, literacyRate=0, language=' '

    switch(city){
        case 'Bengaluru':
            population = 844567
            literacyrate = 88.71
            language = 'Kannada'
            break

        case 'Chennai':
            population = 767676
            literacyRate = 90.20
            language  = 'Tamil'
            break

        case "Mumbai":
            population = 67564
            literacyRate = 87.78
            language = "Hindi"
            break
    }
    let text = `The Indian city of ${city} has a population of ${population}. Language spoken is ${language} and literacy rate is ${literacyRate}%`
    
    document.getElementById('result').innerHTML = text
}