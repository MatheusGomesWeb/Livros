import express from "express";
import consign from "consign";

const port = 3000;

const app = express();
consign().include("models").then("routes").into(app);

// Principal
app.get("/", (req, res) => {
  res.json({ status: "NTask API" });
});

// Index
app.get("/tasks", (req, res) => {
  res.json([
    {
      title: "Limpar o fogão",
    },
    {
      title: "Arrumar a cama",
    },
  ]);
});

app.listen(port, () => {
  console.log(`NTask API - porta ${port}`);
});
