/*
Inheritance : A mechanism that allows you to eliminate redundant code
Example:
Think of HTML Elements

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

    Instead of redifining all these properties and methods for every type of HTML Element
    We can define them once in a generic object, and call it HTML Elements
    and later if we need any specific property or method for any specific element,
    we can then code it in their own class which extends the HTMLElements class

*/