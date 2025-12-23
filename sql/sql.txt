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



CREATE TABLE student (
    roll INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    gender VARCHAR(10) NOT NULL CHECK (gender IN ('Male', 'Female', 'Other')),
    dob DATE CHECK (dob <= CURDATE()),
    password VARCHAR(255) NOT NULL UNIQUE
);

CREATE DATABASE attendance;
use attendance;
create table student (
roll_number int auto_increment primary key,
name varchar(100) not null,
gender VARCHAR(10) not null check (gender in ('Male', 'Female', 'Other')),
dob date ,
password VARCHAR(255) not null unique
);
insert into student (name, gender, dob, password)
VALUES 
('abc','Male', '2005-03-11', SHA('abc123')),
('xyz','Female', '2004-04-12', SHA('xyz456')),
('bcd','Female', '2003-03-21', SHA('bcd789'));

drop table if exists attendance;
create table users (
user_role enum('Student','Faculty','Others') not null,
contact_number char(10) not null,
pass_word char(40) not null,
created_on date not null default(current_date()),
last_login date,
user_active bool not null default false
);
select * from users;
select * from users where user_role=1;
select * from users where user_active;
select * from users where not user_active;

create table attendance_register
(
attendance_date date not null,
roll_number int not null,
present int not null check(present in(0,1)),
primary key(attendance_date,roll_number),
foreign key(roll_number) references student(roll_number)
);