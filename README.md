## Final Projects
----
#### This is where all of you needs to submit your source code and report.
----

Here is a short video **[link](https://www.youtube.com/watch?v=XdhuWDdu-rk)** that will show you how to upload your code here. Here is a [list of steps](https://education.github.com/guide/forks#3-completing-assignments) to be followed precsiely.

>
  1. At first, **fork** this repository
  2. Then **Clone** the forked repository from your account to your pc
  3. Then add all your project files and put your report in the README.md file
  4. **Push/Sync** all the changes you made to github
  5. Create a **Pull Request** on the original repository to complete submission

And here is a long video **[link](https://www.youtube.com/watch?v=73I5dRucCds)** in case you want to know more.

Before you commit your project, put your team name, name of all members and matric, project name and class section in README.md file. And put your team name in the description of the commit.

**At least one of your team member needs to have a GitHub account to be able to submit, do create an account.**

> Bring the [[DSA Project: Group Assessment.pdf](https://github.com/iium-dsa-tutorial/final-projects/blob/master/DSA%20Project-Group%20Assessment.pdf )] document with you in the presentation.

#### You have to fill up the following section - 
----

**Team Name:*Interesting*

**Project Name:*family tree*

**Section:*2*

**Members:**

  1. Mohd Ismet Fitri bin Mohd Zahir (1428199)
  
  2. Muhammad Fadzilah bin Mohd Ariffin (1427023)
  
  3. Adi Adha bin Zainal Abidin (1428187)
  
  4. Mohamad Helmi bin Mahfar (1422961)
  
----

### Report

> Your Project Report Goes Here

----

PROJECT REPORT FAMILY TREE


Extra Features
-No extra features added


Explanation on Algorithms

for
   {
     User decision whether YES or NO to input data;
     
     if
     {
       Set pointer to first Family 
       Remember for next iteration 
     }
     else
     {
       Set next address for previous Family 
       Set previous address for current 
      Remember for next iteration             
     }
   }

Check for relation for each person in
while   
   {                       
     Declare parent count local to this block 
     Get the pointer to the next              

    Loop to tests current person           
     {  
       if         (Found a parent ?)          
         If		(Yes, update count and check it)
           Exit inner loop if both parents found

       Get the address of the next          
     } 
     Next in the list to check             
   }

 Output Family data in correct order

   while (Output Family data in correct order)
   {
     current points to next in list
   }

Now free the memory
   
   while
   {
    Save pointer to enable memory to be freed      
    current points to next in list       
     Free memory for last                     
   }
}

-tolower()
Convert uppercase letter to lowercase
Converts c to its lowercase equivalent if c is an uppercase letter and has a lowercase equivalent. If no such conversion is possible, the value returned is c unchanged.

Notice that what is considered a letter may depend on the locale being used; In the default "C" locale, an uppercase letter is any of: A B C D E F G H I J K L M N O P Q R S T U V W X Y Z, which translate respectively to: a b c d e f g h i j k l m n o p q r s t u v w x y z.

-malloc()
Allocates a block of size bytes of memory, returning a pointer to the beginning of the block.

The content of the newly allocated block of memory is not initialized, remaining with indeterminate values.

If size is zero, the return value depends on the particular library implementation (it may or may not be a null pointer), but the returned pointer shall not be dereferenced.



Short Description of Function/Class

ftheader.h

Struct family{
};
- grouping the data elements together under one name; define structure and the pointers to be used in the program. Only headers are being put here.

ft.cpp

-struct Family *get_person(void); 
temporary structure pointer  
-char related(struct Family *pmember1, struct Family *pmember2);
-char set_ancestry(struct Family *pmember1, struct Family *pmember2);

In this file, we describe the body of the functions

ftmain.cpp

-Contains main functions

-for( ; ;){

}; 
-infinite loop, equivalent to while(true). When no termination condition is provided, the condition defaults to true.






Data Storage Scheme
-malloc()
Allocates a block of size bytes of memory, returning a pointer to the beginning of the block.



Format of the Accepted Questions to the System
-build in question
-user choose the prepared question

