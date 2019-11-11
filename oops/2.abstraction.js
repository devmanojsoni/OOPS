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

// Oject Oriented Code
// Abstraction : We can hide some of the properties and methods
// from the outside world, this is called abstraction
// Simpler Interface
// =================
// this gives us a couple of benefits, first is that we make the interface
// of those objects simpler, using and understanding an object with a
// few properties and methods is easier than an object with sevaral properties
// and methods 
// Reduce the Impact of Change
// ===========================
// Lets imagine that tomorrow, we change these inner or private methods
// non of these changes will  leak to the outside, b'coz we dont have any code
// that touches these methods outside of their containing object
// you may delete a method, or change its parameters, but non of these changes
// will impact the rest of the applications code, so, with 'abstraction' we reduced
// the impact of change
let employee = {
    baseSalary: 30_000,
    overtime: 10,
    rate: 20,
    getWage: function(){ // OOP Code -- Lesser or NO params
        return this.baseSalary + (this.overtime * this.rate);
    }
};