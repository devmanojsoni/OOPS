/*
Poly means MANY, & Morph means FORMS/TYPES
Polymorphism means Many Forms
In OOPS, Polymorphism is a technique that allows you to get rid of
long if/else OR switch/case statements



    Back to HTMLElements example:
                                    HTMLElements
                                        |
                                        |
                                        |
                                  *********************
                                  | Common Properties
                                  |==================
                                  | hidden
                                  | innerHTML
                                  | ------------
                                  | click()
                                  | focus()
                                  |********************
  
    **********              **********                  **********              
    |TextBox                | Select                    | CheckBox
    **********              **********                  ********** 
All these objects/elements should have the ability to be rendered on a page
but, the way each element is rendered is different from the others

if you wish to render multiple html elements in a procedural way,
our code would probably look like this:

switch (...) {
    case 'select': renderSlect();
    case 'text': renderTextBox();
    case 'checkbox': renderCheckBox();
    case ...
    case ...
    case ...

}

With Object Orientation, we can implement a render() method in each of these objects:
    **********              **********                  **********              
    |TextBox                | Select                    | CheckBox
    |render()               | render()                  | render()
    **********              **********                  ********** 
and the render method will behave diffrently, depending on the type of the object we
refrencing!!, and we can get a one liner code like below, instead of the long code above.

element.render()

*/