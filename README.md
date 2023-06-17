# C++ STL (Standard Template Library)

This repository contains examples, explanations, and implementations of various components and features of the C++ Standard Template Library (STL). The STL is a powerful set of C++ libraries that provides generic algorithms and data structures, greatly enhancing the productivity and efficiency of C++ programming.

## Table of Contents

- [Introduction](#introduction)
- [Components](#components)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The C++ STL is a collection of template classes and functions that implement several commonly used algorithms and data structures. It is a part of the C++ Standard Library and has been included in the C++ language specification since the release of C++98.

The main components of the STL include:

- **Containers**: Various container classes like vectors, lists, sets, maps, etc., which store and manage collections of objects.
- **Algorithms**: A wide range of generic algorithms like sorting, searching, and manipulating data in containers.
- **Iterators**: Objects that provide a way to access elements of containers, allowing algorithms to work independently of the underlying container type.
- **Function Objects**: Classes that can be invoked as if they were functions, enabling customization of algorithms.
- **Utilities**: Various utility functions and classes, such as pairs and tuples, that provide additional functionality.

This repository aims to provide comprehensive examples and explanations for each of these components, allowing developers to understand and leverage the full power of the STL.

## Components

### Containers

- `std::vector`: Dynamic array that can be resized.
- `std::list`: Doubly-linked list.
- `std::deque`: Double-ended queue.
- `std::set`: Ordered collection of unique elements.
- `std::map`: Ordered key-value pairs.
- `std::unordered_set`: Unordered collection of unique elements.
- `std::unordered_map`: Unordered key-value pairs.
- `std::stack`: LIFO (Last-In, First-Out) data structure.
- `std::queue`: FIFO (First-In, First-Out) data structure.
- `std::priority_queue`: Priority-based queue.

### Algorithms

- `std::sort`: Sorts elements in a range.
- `std::find`: Finds the first occurrence of a value in a range.
- `std::binary_search`: Checks if a value exists in a sorted range.
- `std::transform`: Applies a function to a range and stores the result in another range.
- `std::accumulate`: Calculates the sum of elements in a range.
- `std::count`: Counts the occurrences of a value in a range.
- `std::unique`: Removes consecutive duplicates in a range.
- `std::reverse`: Reverses the order of elements in a range.
- `std::rotate`: Rotates the elements in a range.

### Iterators

- `std::begin`, `std::end`: Returns iterators pointing to the beginning and end of a container.
- `std::advance`: Advances an iterator by a specified number of positions.
- `std::distance`: Calculates the number of elements between two iterators.
- `std::next`, `std::prev`: Returns iterators pointing to the next or previous element.

### Function Objects

- `std::less`: Compares two elements.
- `std::greater`: Compares two elements in reverse order.
- `std::plus`: Adds two elements.
- `std::minus`: Subtracts two elements.
- `std::multiplies`: Multiplies two elements.
- `std::divides`: Divides two elements.

### Utilities

- `std::pair`: Stores a pair of values.
- `std::
