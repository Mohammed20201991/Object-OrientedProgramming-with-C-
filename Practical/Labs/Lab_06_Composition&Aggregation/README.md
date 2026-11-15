# Lab 06 – Composition and Aggregation

## Objectives

* Understand Composition and Aggregation in OOP.
* Implement Has-A relationships between classes.
* Distinguish between Composition and Aggregation.
* Use objects of one class as members or references in another class.

## Practice

Implement a `Car` class using Composition:

* Create an `Engine` class.
* Include an `Engine` object inside the `Car` class.
* Initialize the engine using a constructor.
* Display car information and engine type.

Implement a `Department` class using Aggregation:

* Create a `Teacher` class.
* Pass a `Teacher` object to the `Department` class.
* Display department information and teacher details.

## Exercises

Implement Composition and Aggregation for:

* `Computer` and `CPU` (Composition).
* `House` and `Room` (Composition).
* `University` and `Professor` (Aggregation).
* `Team` and `Player` (Aggregation).

## Challenge

Create a `University Management System` using Composition and Aggregation:

* A `University` contains multiple `Department` objects (Composition).
* Each `Department` has multiple `Professor` objects (Aggregation).
* Display university, department, and professor information.
* Demonstrate the difference in object lifetime between Composition and Aggregation.