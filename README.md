# Console-Based-Shopping-Cart-System

## Overview

A simple console-based shopping cart system in C++ that allows users to add products, view the cart, and checkout. It uses object-oriented design and the Standard Template Library (STL) for efficient data management.

- **Product Management**: 
  - Displays a list of available products.
  - Allows users to select products using short names.

- **Cart Operations**:
  - Add selected products to the cart.
  - View the current contents of the cart, including each item's details and total price.
  - Update the quantity of products in the cart automatically.

- **Checkout Process**:
  - Handles user payments.
  - Calculates and displays the change if the payment exceeds the total price.
  - Provides feedback if the payment is insufficient.

## Usage
- **Add Items**: 
  - Start the application.
  - Select the action to add items to the cart.
  - Choose products from the displayed list using their short names.
  - The selected products are added to the cart, with quantities updated automatically for repeated selections.

- **View Cart**:
  - Select the action to view the cart.
  - The cart's contents are displayed, showing each item's details and the total price.

- **Checkout**:
  - Select the checkout action.
  - Enter the payment amount.
  - If the payment is sufficient, the change is displayed and the transaction is completed.
  - If the payment is insufficient, an error message is displayed.
