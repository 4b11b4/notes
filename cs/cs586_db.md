#lec1
- Q: How does isolation happen? Does the DB take a snapshot for each transation?
* A: This is handled by "locks" and state management.
- When deciding the structure for relational databases...
  - Ask yourself the question: "Will this table have one row per item?" It should.
  - The "one-row-per-what" is known as the "Table Key".
    - The key may be made up of two attributes (columns).
  - A single table may have multiple keys, but one must be the primary key.

#lec2
- Foreign keys are usually keys, but can be any attribute.
- Set of allowable values for an attribute is the "domain".
  - e.g. integers 1-5, two strings "checkings" & "savings"
