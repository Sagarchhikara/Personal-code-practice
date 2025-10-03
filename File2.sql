USE st3;
-- create table student(id,name,gender,contact_number) use primary key,not null,check,unique contraints
-- add 5 records
-- create exam table(id,subject,marks,grade,exam_date) use foreign key, contraints
-- add 4 records, calculate grade using check constraint check duplicate id in exam table
-- show gender wise average ,maximum,and minimum marks
CREATE DATABASE cw;

use cw;

CREATE TABLE student (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(25) NOT NULL,
    gender VARCHAR(1) CHECK (gender IN ('M', 'F')),
    contact_number VARCHAR(15) UNIQUE NOT NULL
);

INSERT INTO
    student (name, gender, contact_number)
VALUES ('John Doe', 'M', '1234567890'),
    (
        'Jane Smith',
        'F',
        '0987654321'
    ),
    (
        'Alice Johnson',
        'F',
        '5555555555'
    ),
    (
        'Bob Brown',
        'M',
        '4444444444'
    ),
    (
        'Charlie Davis',
        'M',
        '3333333333'
    );

CREATE TABLE exam (
    id INT PRIMARY KEY,
    subject VARCHAR(50) NOT NULL,
    marks INT CHECK (marks BETWEEN 0 AND 100),
    grade CHAR(1) CHECK (
        grade IN ('A', 'B', 'C', 'D', 'F')
    ),
    exam_date DATE NOT NULL,
    CONSTRAINT fk_student FOREIGN KEY (id) REFERENCES student (id)
);

ALTER TABLE exam DROP COLUMN grade;

INSERT INTO
    exam (id, subject, marks, exam_date)
VALUES (
        1,
        'Mathematics',
        95,
        '2023-05-01'
    ),
    (
        2,
        'Science',
        85,
        '2023-05-02'
    ),
    (
        3,
        'History',
        75,
        '2023-05-03'
    ),
    (
        4,
        'Geography',
        65,
        '2023-05-04'
    ),
    (
        5,
        'English',
        55,
        '2023-05-05'
    );
-- This will fail due to foreign key constraint

-- Calculate grade based on marks
UPDATE exam
SET
    grade = CASE
        WHEN marks >= 90 THEN 'A'
        WHEN marks >= 80 THEN 'B'
        WHEN marks >= 70 THEN 'C'
        WHEN marks >= 60 THEN 'D'
        ELSE 'F'
    END;