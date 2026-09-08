Shopping Cart Program in C


The program allows the user to:
- Enter the name of an item
- Enter the price of the item
- Enter the quantity
- Calculate the total cost
- Display the purchase details

 Concepts Used

1.  Variables
2. Data types
3. `char` strings
4. `fgets()`
5. `scanf()`
6. `printf()`
7. `strlen()`


 flow
1. Ask the user for the item name.
2. Read the item using `fgets()`.
3. Remove the newline character using `strlen()`.
4. Ask for the price of the item.
5. Ask for the quantity.
6. Calculate the total:

total = price * quantity;