const colors = {
    p: '#388e3c',
    ul: '#5e35b1',
    ol: '#fbc02d',
    nav: '#64dd17',
    div: '#1565c0',
    form: '#9f6581',
    body: '#25b6da',
    main: '#00acc1',
    span: '#e53935',
    header: '#d81b60',
    footer: '#304ffe',
    section: '#f67809',
    padrao: '#616161',
    get(tag){
        return this[tag] ? this[tag] : this.padrao
    }
}
document.querySelectorAll('.tag').forEach(elemento => {
    const tagName = elemento.tagName.toLowerCase()

    elemento.style.borderColor = colors.get(tagName)
    if (!elemento.classList.contains('nolabel')) {
        const label = document.createElement('label')
        label.style.backgroundColor = colors.get(tagName)
        label.innerHTML = tagName
        elemento.insertBefore(label, elemento.childNodes[0])
    }
})