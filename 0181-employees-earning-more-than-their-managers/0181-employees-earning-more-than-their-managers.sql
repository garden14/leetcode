SELECT b.name AS Employee
FROM Employee a
INNER JOIN Employee b ON a.id = b.managerID
WHERE
a.salary < b.salary