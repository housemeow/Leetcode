# Write your MySQL query statement below
SELECT DISTINCT a.Email
    FROM Person a
    JOIN Person b
        ON a.Email = b.Email AND
           a.Id != b.Id
