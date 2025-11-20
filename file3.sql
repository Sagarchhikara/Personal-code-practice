-- Conditional Statemnets--

CREATE DATABASE dbg4;
USE dbg4;

create table books (
    book_id INT PRIMARY KEY AUTO_INCREMENT,
    return_date DATE NOT NULL,
    due_date DATE NOT NULL
    
);

INSERT INTO books (return_date, due_date) VALUES
('2024-06-01', '2024-05-25'),
('2024-06-10', '2024-06-05'),
('2024-06-15', '2024-06-20'),
('2024-06-18', '2024-06-15');

-- this is conceptual example inside a stored procedure
DECLARE fine_amount DECIMAL(5,2);
DECLARE days_late INT;

-- Let's assume we calculate days_late
SET days_late = DATEDIFF(return_date, due_date);

IF days_late > 0 THEN
    SET fine_amount = days_late * 0.50; -- 50 cents per day
    -- Now we can insert this fine_amount into a fines table
    INSERT INTO Fines (loan_id, amount) VALUES (v_loan_id, fine_amount);
ELSE
    SET fine_amount = 0.00; -- No fine if returned on or before the due date
    -- Perhaps we log a "Good Citizen" note somewhere.
END IF;

-- case expression ADDCASE input_expression
    WHEN when_expression1 THEN result_expression1
    WHEN when_expression2 THEN result_expression2
    ...
    ELSE else_result_expression
END
-- real life case example 
SELECT
    employee_name,
    department_code,
    CASE department_code
        WHEN 'IT' THEN 'Technology Group'
        WHEN 'HR' THEN 'Human Resources'
        WHEN 'FIN' THEN 'Finance and Accounting'
        ELSE 'Other Department'
    END AS department_name
FROM Employees;

-- case 
SELECT
    student_name,
    marks,
    CASE
        WHEN marks >= 90 THEN 'A'
        WHEN marks >= 75 THEN 'B'
        WHEN marks >= 60 THEN 'C'
        WHEN marks >= 40 THEN 'D'
        ELSE 'F'
    END AS grade
FROM Students;
