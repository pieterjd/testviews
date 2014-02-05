testviews
===============
A test module on how to expose a database table to views. This module includes:

* a table with as columns:
  * an id
  * a few dates
  * foreign key to node and user

This module exposes to views:
* all columns of this table
* relationship to node and user, so you can pull in additional node or user info
