function getRandomNumber(min, max) {
  return Math.random() * (max - min) + min;
}
console.log("Random Number:");
console.log(getRandomNumber(2,18));