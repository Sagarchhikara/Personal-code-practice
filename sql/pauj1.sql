CREATE DATABASE CU;

USE CU;

show tables;

create table student (
    id int primary key,
    name varchar(50),
    age int,
    email varchar(50)
);

select * from student;