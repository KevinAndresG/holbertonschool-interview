#!/usr/bin/node
const request = require('request');
const { argv } = require('process');
const url = 'https://swapi-api.hbtn.io/api/films/' + argv[2];
request(url, function (error, response, body) {
  if (error) {
    console.log(error);
  }
  const b = JSON.parse(body);
  const { characters } = b;
  getCharacters(characters);
});

async function getCharacters (person) {
  for (const i in person) {
    await new Promise((resolve, reject) => {
      request(person[i], function (err, resp, bod) {
        if (err) {
          console.error(err);
          reject(err);
        } else {
          const bo = JSON.parse(bod);
          resolve(bo);
          console.log(bo.name);
        }
      });
    });
  }
}
