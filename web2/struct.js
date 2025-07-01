
let user={
    email:"john@gmail.com",
    password:"2134",
    age: 12,
    address:"Kathmandu",
};
console.log(user.email);
console.log(user.address);
console.log(Object.keys(user));
console.log(Object.values(user));
delete user.address;
console.log(user);
let {email,password}=user;
console.log(email);//object destructuring
console.log(password);

let newUser={...user,creditCard:"2313"};
console.log(newUser);
for (let key in user) {
    console.log(key,user[key]);
}