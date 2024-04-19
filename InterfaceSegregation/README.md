# Interface Segregation Principle

## Thought Process

Whenever you are forced to implement certain features of an interface that you do not need, you abstract those features into a seperate interface.

## Definition

Single large interface must be divided into small, relevant, cohesive interfaces so that clients can know about interfaces that are relevant to them.

## Motivation

* Client should depend on only those interfaces that they use, they should not be forced to implement any functionality that is of no use to them.
