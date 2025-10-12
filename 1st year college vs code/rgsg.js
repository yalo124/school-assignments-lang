const quotes = [
 {text: "type shit", author: "duke dennis"},       
 {
    text: " in the mefsufe", author: " albert enstein"
 },


];

const quoteEl = document.getElementById("quote")
const authorEl = document.getElementById("author")
const btn = document.getElementById("new-quote-btn")

function getQuote() [
    let random = quote[Math.floor(Math.random() * quotes.length)];
    console.log("new quotes:", random.text, "-", random.author);

    quoteEl.textContent = ' "${random.text}"';
    authorEl.textContent = "- ${random.author}";
]