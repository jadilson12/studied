const axios = require('axios')
const TotalVoice = require('totalvoice-node')


const servers = [
  {
      name: "Servidor 1",
      url: "http://localhost:4001",
      developer: {
        name: "Jadilson Guedes",
        telephone: process.env.JADILSON_TELEPHONE
      }
  },
  {
      name: "Servidor 2",
      url: "http://localhost:4002",
      developer: {
        name: "Jadilson Guedes",
        telephone: process.env.JADILSON_TELEPHONE
      }
  }
]
setInterval( () => {
    servers.forEach( e => {
     axios.get(e.url)
    .then(resp => 
          console.log(`o ${e.name} está no ar`))
    .catch(error => console.log(`o ${e.name} está fora`))
     })
}, 1000)

