select e.name, b.bonus
from Employee as e
    LEFT JOIN Bonus as b
    ON e.empId = b.empId
where b.Bonus < 1000 OR b.Bonus IS NULL;