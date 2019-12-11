const Telegram = require('telegram-bot-api')
const dot = require('dotenv').config();
const system = require('system-commands')

const api = new Telegram({
      token: process.env.API_TOKEN,
      updates: {
        enabled: true
      }
})

// api.getChat()
//     .then( data =>  console.table(data))
//     // .catch(e => console.log(e))

// Received text message
// api.on('message', m =>  console.log(m))

// // Received inline query
// api.on('inline.query', m => console.log(m))

// // Received chosen inline result
// api.on('inline.result', m => console.log(m))

// // New incoming callback query
// api.on('inline.callback.query', m => console.log(m))

// // Message that was edited
// api.on('edited.message', m => console.log(m))

// Generic update object
// Subscribe on it in case if you want to handle all possible
// event types in one callback
function rodacomando (t) {
  console.log(`o Comando ${t} realizado`)
  system(t).then(e => console.log(e)).catch(err => console.log(err))
}

// api.on('update', function(m) {
//   let { text } = m.channel_post
//   rodacomando(text)
// })

api.on('update', function(m) {
    console.log(m);

})

