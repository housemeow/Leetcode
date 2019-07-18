# Write your MySQL query statement below
SELECT emp.Name AS Employee
    FROM (
        SELECT Name, Salary, ManagerId
            FROM Employee
            WHERE ManagerId IS NOT NULL
    ) emp
    JOIN (
        SELECT Id, Salary
            FROM Employee
    ) manager ON emp.ManagerId = manager.Id AND emp.Salary > manager.Salary
