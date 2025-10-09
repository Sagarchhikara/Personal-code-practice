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
ALTER TABLE exam ADD COLUMN grade CHAR(1);

UPDATE exam
SET
    grade = CASE
        WHEN marks >= 90 THEN 'A'
        WHEN marks >= 80 THEN 'B'
        WHEN marks >= 70 THEN 'C'
        WHEN marks >= 60 THEN 'D'
        ELSE 'F'
    END;

-- check duplicate id in exam table

--
SELECT id, COUNT(*) AS cnt FROM exam GROUP BY id HAVING COUNT(*) > 1;

SELECT * FROM exam;

create DATABASE A1;

use A1;
-- create table student(id,name,gender,contact_number) use primary key,not null,check,unique contraints
-- add 5 records
-- create exam table(id,subject,marks,grade,exam_date) dont take id as primary key use forgien key contratint for marks and grade
-- use not null and default constraint for exam date
-- add 4 records without grade data,sun should be same for all 4, dont use default for subject

CREATE Table student (
    id INT PRIMARY KEY,
    name VARCHAR(25) NOT NULL,
    gender VARCHAR(1) CHECK (gender IN ('M', 'F')),
    contact_number VARCHAR(10) UNIQUE NOT NULL
);

INSERT INTO
    student (
        id,
        name,
        gender,
        contact_number
    )
VALUES (
        1,
        'Sagar Chhikara',
        'M',
        '1234567890'
    ),
    (
        2,
        'Ayusman ',
        'M',
        '987667897'
    ),
    (
        3,
        'Karmanya',
        'M',
        '5555555555'
    ),
    (
        4,
        'Aryan Malik',
        'M',
        '4444444444'
    ),
    (
        5,
        'Gourav sharma',
        'M',
        '3333333333'
    );

CREATE TABLE exam (
    id INT,
    subject VARCHAR(50) NOT NULL,
    marks INT,
    grade CHAR(1),
    exam_date DATE NOT NULL DEFAULT(CURRENT_DATE),
    FOREIGN KEY (id) REFERENCES student (id)
);

INSERT INTO
    exam (id, subject, marks)
VALUES (1, 'Dsa', 95),
    (2, 'Dsa', 80),
    (3, 'Dsa', 60),
    (4, 'Dsa', 50);
-- check the duplicate data in exam table
SELECT id, COUNT(*) AS cnt FROM exam GROUP BY id HAVING COUNT(*) > 1;

INSERT into exam (id, subject, marks) values (1, 'Dsa', 90);

-- remove duplicate from exam table
DELETE e1
FROM exam e1, exam e2
WHERE
    e1.id = e2.id
    AND e1.marks < e2.marks;
-- calculate  and update grade in exam table based on marks
UPDATE exam
SET
    grade = CASE
        WHEN marks >= 90 THEN 'O'
        WHEN marks >= 80 THEN 'A+'
        WHEN marks >= 70 THEN 'A'
        WHEN marks >= 60 THEN 'B'
        WHEN marks >= 50 THEN 'C'
        ELSE 'F'
    END;

-- show gender wise average ,maximum,and minimum marks