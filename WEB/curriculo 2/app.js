const toggle = document.getElementById('toggle')
const body = document.querySelector('body')
const a = document.getElementById('a')
const b = document.getElementById('b')
const c = document.getElementById('c')
const titulo = document.getElementById('titulo')
const fundo = document.querySelector('html')

const git = document.getElementById('git')
const link = document.getElementById('link')
const insta = document.getElementById('insta')

toggle.onclick = function(){
    toggle.classList.toggle('active')
    body.classList.toggle('active')

    a.classList.toggle('active')
    b.classList.toggle('active')
    c.classList.toggle('active')
    
    titulo.classList.toggle('active')
    fundo.classList.toggle('active')

    git.classList.toggle('active')
    link.classList.toggle('active')
    insta.classList.toggle('active')
    
}
