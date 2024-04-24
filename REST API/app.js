const express = require("express");
const { hostname } = require("os");
const app = express();
const PORT = process.env.PORT || 5000;

const products_routes = require("./routes/product")

app.get("/", (request,response) => {
    response.send("Hi I am Live ");
})

app.use("/api/products",products_routes)

const start = async () => {
    try {

        app.listen(PORT, () => {
            `${PORT} Yes i am connected`
        });
    }
    catch(error)
    {
        console.log(error)
    }
}

start();