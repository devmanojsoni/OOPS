// Procedural Code vs Object Oriented Code
// Procedural Code Starts Here
//==========================
let baseSalary = 30_000;
let overtime = 10;
let rate = 20;
// Procedural Code -- too many params
function getWage(baseSalary, overTime, rate){
    return baseSalary + (overTime * rate);
}
// Procedural Code Ends Here

// Oject Oriented Code</>

// Achieve Encapsulation : Make Data Members Private, and Methods Public
// and manipulate data with the methods of the class itself (getter/setter functions)

// Note: And only instance/or object of that class can interact with the data members
// or manipulate the data with functions (e.g getter/setter) inside the class

// Encapsulation : Grouping Properties and Methods Together 
// Benifits: 1. Reduce Complexity + Increase Reusability
let employee = {
    baseSalary: 30_000,
    overtime: 10,
    rate: 20,
    getWage: function(){ // OOP Code -- Lesser or NO params
        return this.baseSalary + (this.overtime * this.rate);
    }
};