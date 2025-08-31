use dbg4;

SELECT * from student;

use dbg4;

CREATE TABLE exam_result (
    roll_no INT PRIMARY KEY,
    sname VARCHAR(25) NOT NULL,
    gender CHAR(1) CHECK (gender IN ('M', 'F')),
    exam_date DATE,
    sub_name1 VARCHAR(25) NOT NULL,
    sub_name2 VARCHAR(25) NOT NULL,
    marks1 INT CHECK (marks1 BETWEEN 0 AND 100),
    marks2 INT CHECK (marks2 BETWEEN 0 AND 100)
);

SELECT * FROM exam_result;

INSERT INTO
    exam_result (
        roll_no,
        sname,
        gender,
        exam_date,
        sub_name1,
        sub_name2,
        marks1,
        marks2
    )
VALUES (
        1,
        'John Doe',
        'M',
        '2023-10-01',
        'Math',
        'Science',
        85,
        90
    );

SELECT * FROM exam_result;

use dbg4

CREATE DATABASE project;

SHOW DATABASES;

USE project;

CREATE table users (
    userid INT PRIMARY KEY AUTO_INCREMENT,
    username VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL UNIQUE,
    phone VARCHAR(20) NOT NULL UNIQUE,
    password VARCHAR(255) NOT NULL
);

CREATE TABLE movies (
    movieid INT PRIMARY KEY AUTO_INCREMENT,
    title VARCHAR(255) NOT NULL,
    genre VARCHAR(100) NOT NULL,
    language VARCHAR(50),
    duration INT CHECK (duration > 0),
    rating DECIMAL(3, 1) CHECK (rating BETWEEN 0 AND 10)
);