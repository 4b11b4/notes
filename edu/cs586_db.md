#lec1
- Q: How does isolation happen? Does the DB take a snapshot for each transation?
* A: This is handled by "locks" and state management.
- When deciding the structure for relational databases...
  - Ask yourself the question: "Will this table have one row per item?" It should.
  - The "one-row-per-what" is known as the "Table Key".
    - The key may be made up of two attributes (columns).
  - A single table may have multiple keys, but one must be the primary key.
