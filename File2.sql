USE st3;
-- create table student(id,name,gender,contact_number) use primary key,not null,check,unique contraints
-- add 5 records
-- create exam table(id,subject,marks,grade,exam_date) use foreign key, contraints
-- add 4 records, calculate grade using check constraint check duplicate id in exam table

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
    id INT,
    subject VARCHAR(50) NOT NULL,
    marks INT CHECK (marks BETWEEN 0 AND 100),
    grade CHAR(1) CHECK (
        grade IN ('A', 'B', 'C', 'D', 'F')
    ),
    exam_date DATE NOT NULL,
    CONSTRAINT fk_student FOREIGN KEY (id) REFERENCES student (id)
);