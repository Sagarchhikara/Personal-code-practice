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
    gender VARCHAR(1) check (gender IN ('M', 'F')),
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