use ai_lavanya;
drop table ai_batch_01;
create table ai_batch_01
(SNO int not null primary key,
First_Name varchar (50) not null,
Middle_Name varchar (50) not null,
Last_Name varchar (50) not null,
DOB date,
Aadhar_Number long ,
Biometric_ID long ,
Primary_Contact_No long ,
Secondary_Contact_No long,
WhatsApp_No	long ,
User_name varchar(50),
Password varchar(50),
UG varchar(50),
Subject_Group varchar(50),
PG varchar(50),
Subject varchar(50),
Year_of_Passing int,
AI_Batch_Email varchar(50),
Email varchar(50),
Address varchar(255),
District varchar(50),
Father_Name varchar(50),
Husband_Name varchar(50),	
Mother_Name varchar(50)
);
select * from ai_batch_01;
insert into ai_batch_01 values(1,'Abdul', 'Rahman B','','2001-01-15',669092087983,92087983,9952630126,6369696359,9952630126,'TI2023M-C01E438
','Password@123','BSC','Computer science','NIL','NIL','2022','','abdulrahman001007@gmail.com','No 3/1-76 Indra street Keela ambikaburam Trichy-04','Trichy','Badhusha','','Noorjahan');

insert into ai_batch_01 values (2,'Arun T','','','2002-07-07',341246643302,46643302,8525880306,6382506148,8525880306,'PU2023M-C01E488
','Password@123','BSC','Computer science','NIL','NIL','2023','','arunaathi41@gmail.com','3/4 Thirupur (po)Kulathur(tk)Senaiyakuti 622502','Pudukkottai(Dt)', 'Tamil selvam','','Suppu laxmi');

insert into ai_batch_01 values(3,'Aysha', 'sithika L','','1988-01-11',784654756225,54756225,8124823036,8610353074,8124823036,'TI2023F-C01E78D
','Password@123','12','Computer science','NIL','NIL','2005','','aslamshabeen@gmail.com','LIGII2801 BISMILLAHMANZIL Annanagarphase2 Navalpattu','Trichy','','Nazrul Islam','Amthul jabeen');

insert into ai_batch_01 values(4,'Bhavani R','','','2002-10-13',935775705642,75705642,6380185097,9659871377,6380185097,'Pu2023F-C01E44D
','Password@123','BSC','Computer science','NIL','NIL','2023','','bb464490@gmail.com','Melakkottai Kovilur(p) Alangudi Tk Pudukkottai(dt).
','Pudukkottai','C.Ramachandran','','R.Thenmozhi');

insert into ai_batch_01 values(5,'Fathima M','','','2002-12-17',622631324614,31324614,6374041818,9791676433,6374041818,'TI2023F-C01E43B
','Password@123','B.Com','Commerce','NIL','NIL','2024','','Ray0488faths@gmail.com','5/249 20th cross vasancity vayalur road trichy-620102','Trichy','Mohamed Ibrahim','','Saira banu');

insert into ai_batch_01 values(6,'Ghouse bi S','','','1989-08-14',818393990050,93990050,9994286043,7708475065,9994286043,'TI2023F-C01E46D
','Password@123','B.A.','English','NIL','NIL','2010','','happydhillu@gmail.com','MIG 49 Phase 1 Anna nagarTNUDP trichy-620026.','Trichy','','Juber khan B','Zarina Begum');

insert into ai_batch_01 values(7,'Gnanagowsalya K','','','2003-04-29',418718821662,18821662,7094373123,9965452410,7094373123,'TI2023F-C01E474
','Password@123','Bsc ','Computer science','NIL','NIL','2023','','kowsalyakannan29@gmail.com','26/1 College road Sri Ram theatre near Musiri','Trichy','Kannan.A','','Sundhari.K');

insert into ai_batch_01 values(8,'Hajeera', 'Sithika L','','1992-06-11',430341868981,41868981,8056447098,9751471799,8056447098,'TI2023F-C01E796
','Password@123','BA','English','NIL','NIL','2013','','hajeerasithka2021@gmail.com','3 murugesan street M.K. kottai trichy
','Trichy','','Syed Azarudeen','Amthul jabeen');

insert into ai_batch_01 values(9,'HARIHARAN A','','','2001-10-11',304765424440,65424440,9363649175,9363649175,9363649175,'PE2023M-C01E437
','Password@123','BE','EEE','NIL','NIL','2023','','hariharananbu2001@gmail.com','2/225 North st keelapuliyur po Kunnam tk Perambalur dt 621115
','Perambalur','ANBALAGAN D','','Anjalai A');

insert into ai_batch_01 values(10,'Jayalakshmi R','','','1997-02-06',432445616668,45616668,9500628375,6385632493,6385632493,'TI2023F-C01E444
','Password@123','BCA','Computer application','MCA','Computer Application','2019','','jasperjeevi@gmail.com','28-A, bharathiyar Street west ambigapuram trichy-4','Trichy','Ravikumar','','Geetha');
select * from ai_batch_01;
insert into ai_batch_01 values(11,'Jothika J','','','2003-01-08',693941180387,41180387,9585607631,9843412199,9585607631,'TI2023F-C01E555
','Password@123','BSC','Mathematics','NIL','NIL','2023','','jothikajagan8@gmail.com','H/5 Housing Unit Parvathipuram Musiri Trichy DT.
','Trichy','Jegatharatchagan K','','Manjula J');

insert into ai_batch_01 values(12,'Kalaiarasan A','','','1987-07-29',447595386464,95386464,9600330846,9994057344,9600330846,'TI2023M-C01E78B
','Password@123','B.com','Commerce','NIL','NIL','2009','','Kalai29.7@gmail.com','2/337 navalpattu burma colony oft po trichy 16
','Trichy','K.Ayyavoo','','A.Vasanthi');

insert into ai_batch_01 values(13,'Kayalvizhi M','','','1998-09-13','','',7339221973,9698821473,7339221973,'TI2023F-C01E475','Password@123','BE','Mechanical engineering','NIL','NIL','2020','','kayalmahe123@gmail.com','Door No 2/125A Koothur colony Koothur post mannachanallur Tk Trichy - 621216','Trichy','Mahendhran .N','','Vijayaragini .M');

insert into ai_batch_01 values(14,'Komaladevi S','','','2003-07-29',460205744637,05744637,8940898862,7904257743,8940898862,'PU2023F-C01E466
','Password@123','BSC','Computer science','NIL','NIL','2023','','komaladevi2003@gmail.com','Gandharvakkottai pudukottai','Pudukottai','M. Subramaniyan','','Kalaiselvi. S');

insert into ai_batch_01 values(15,'LAVANYA M ','','','2001-02-26',629731226643,31226643,7904460924,8248554770,7904460924,'TI2023F-C01EA43
','Password@123','BSC ','Mathematics','NIL','NIL','2021','lavanyamai01@gmail.com','mlavanyam37@gmail.com','33/66 Kamala Nehru Nagar EB Road','Trichy','','Aravind samy R','Avadaiyammal');

insert into ai_batch_01 values(16,'Narayanan S','','','1999-06-14',282903912214,03912214,9361015928,8122648085,9361015928,'TI2023M-C01E78C','Password@123','BA','History','NIL','NIL','2019','','Naveenkds82@gmail.com','3/141 Sivan kovil street allithurai somarampettai post trichy 620102
','Trichy','Sivaprakasam','','Sumathi');

insert into ai_batch_01 values(17,'Prasanth P','','','2000-07-27',983315540255,15540255,9361216766,9626922317,9361216766,'PU2023M-C01E445
','Password@123','BE','ECE','NIL','NIL','2022','','aryanprasanth163@gmail.com','No 105 Maruthampatti Vilapatti(post) Ilupur (Taluk) Pudukkottai-622504','Pudukkottai','Palanisamy M','','Ponnazhagu P');
insert into ai_batch_01 values(18,'Priya S','','','2002-5-5',920343048388,43048388,9626940557,9626940557,8508332712,'TI2023F-C01EC0E
','Password@123','B.SC','Physics','NIL','NIL','2023','','lakshmipriya5522@gmail.com','10 Mettu street Wouraiyur Trichy-3','Trichy','SenthilKumar M','','Elangiyam S');
insert into ai_batch_01 values(19,'Punithavathi D','','','1997-05-22',762578126673,78126673,6369782863,9715451286,6369782863,'TI2023F-C01E8C2
','Password@123','B.Com','Commerce','NIL','NIL','2025','','Punithavathid1997@gmail.com','2/275NPS colony OFT Main Road HAPF Town Suriyur Post Trichy-620025','Trichy','V. Devaraj','','D. Santhamani');
insert into ai_batch_01 values(20,'Raghul S','','','2000-06-07',871736862600,36862600,7010107069,'',8680827179,'TI2023M-C01E4E6','Password@123','BE','MECHANICAL ENGINEERING','NIL','NIL','2022','','rockstarraghul55@gmail.com','3/443 mgr rajaveethi Vs colony Kattur Trichy 620019','Trichy','Senthil Kumar p','','Sumathi S');
insert into ai_batch_01 values(21,'Roobankumar  K','','','1992-11-22',612231264958,31264958,7904255453,9486645960,7904255453,'TI2023M-C01E8CB','Password@123','BE','ECE','NIL','NIL','2015','','vroobank92@gmail.com','L1 chandradhayam Shankar abodes near krt motors chennai trunk road Thiruvanaikovil trichy','Trichy','Kumaravel','','Valli');
insert into ai_batch_01 values(22,'Sangari S','','','1998-01-19',360158896738,58896738,9787264394,9751721397,9787264394,'TH2023F-C01E43E','Password@123','BE','ECE','NIL','NIL','2019','','sangarisaminathan@gmail.com','1/44 Agraharam North budalur Thanjavur (Dt) 613602','Thanjavur','Saminathan M','','Latha S');
insert into ai_batch_01 values(23,'Santhiya S','','','2003-04-29',842296226066,96226066,8940937523,9842021095,8940937522,'TI2023F-C01E43D
','Password@123','Bsc ','Information technology','NIL','NIL','2023','','santhiyasakthivel37@gmail.com','No 57 3rd street gandhinagar college road musiri trichy(dt)','Trichy','Sakthivel.T','','Chitra S'),
(24,'Saranya N','','','1994-07-28',971123726105,23726105,8248879007,9585031787,8248879007,'TI2023F-C01EA19','Password@123','BE','CSE','NIL','NIL','2015','','saranyanarayananai01@gmail.com','No3a Balaji Avenue 1st cross Old karur road Melachinthamani Trichy 620002','Trichy','','S.Narayanan','A.Marikkannu');
insert into ai_batch_01 values(25,'Saravanan M','','','2003-05-20',385868916470,68916470,8838011266,7603972485,8838011266,'TH2023M-C01E44A
','Password@123','BSC','Computer Science','NIL','NIL','2023','','saravanasaro1435@gmail.com','1/88 Vallabramankadu Sornakadu (Post) Peravurani(Taluk) Thanjavur (District)-614804','Thanjavur','Malaiyarasan V','','Ganamani M'),
(26,'Snega D','','','2003-04-05',546307861816,07861816,9047648856,8072885475,9047648856,'TI2023F-C01E446','Password@123','BSC','IT','NIL','NIL','2023','','Stdsnega.it@cauverycollege.ac.in','1-130/A perumal Kovil street Reddi mangudi Trichy','Trichy','R.Durai raj','','D.Bhuvaneswari');
insert into ai_batch_01 values(27,'Srinidhi S','','','2001-12-19',733557069525,57069525,9360728585,9500868943,9360728585,'TI2023F-C01EA34
','Password@123','BSC','IT','NIL','NIL','2023','','Srinidhisrinidhi233@gmail.com','45/B East street melur srirangam','Trichy','Sundarrajan B
','','Shanthi. S'),
(28,'Tamil V','','','2003-05-09',277289901567,89901567,7904761471,7904761471,7904761471,'TI2023F-C01EA44','Password@123','BSC','IT','NIL','NIL','2023','','venktesantamil@gmail.com','45/B East street, Melur Srirangam, Trichy','Trichy','Venktesan B','','Lalitha V');
insert into ai_batch_01 values(29,'Vinu Andrews S','','','1999-11-24',543353698598,53698598,8428908488,'',8428908488,'TI2023M-C01F2A8','Password@123','Bba','business administration','MBA','Safety','2022','','vinuandrews10@gmail.com','66 muslim street varaganeri Trichy','Trichy','Selvaraj A','','Mercy s'),
(30,'Yogarajan K','','','2001-12-15',241602457541,02457541,6379275571,8056724735,6379275571,'TH2023M-C01E455','Password@123','BCA
','Computer Application','NIL','NIL','2022','','yogiraja2001@gmail.com','44 agraharam north Budalur Budalur Thanjavur (dt).Pincode 613602','Thanjavur','M.Kaliyamoorthy','','K.Uma maheswari');
select * from ai_batch_01;
drop table system_details;
create table system_details (
SNO int not null primary key auto_increment,
Name varchar (50),
System_no int,
Error varchar(50),
OS_Name	varchar(50),
RAM varchar(50),
Processor varchar(50), 
Mouse_Condition varchar(50),
Keyboard_Condition varchar(50)
);
insert into system_details values (13,'Kayalvizhi M',1,'visual C++2019','Windows 7 Ultimate','4.00 GB','INTEL CORE i3','Working','working'),
(22,'Sangari S',2,'Working','windows 8.1 pro','2.00 GB','INTEL Pentium','working','Working'),
(10,'Jayalakshmi R',3,'working','windows 8.1 pro','4.00 GB','INTEL CORE i3','working','working'),
(5,'Fathima M',4,'visual C++ 2019','windows 7 ultimate ','2.00GB','Intel Core  i3','working','working'),
(15,'LAVANYA M ',5,'visual C++ 2019','Windows 7 Ultimate','4.00 GB','Intel Core i3','Working','Working'),
(24,'Saranya N',6,'not supported by this processor type','Windows 7 Professional','2.00 GB','INTEL CORE i3','Working','Working'),
(4,'Bhavani R',8,'working','windows 10 pro','4.00 GB','Intel Core i3','working','working'),
(19,'Punithavathi D',9,'visual C++ 2019','windows 8.1 pro','2.00 GB','Intel Core 2 Duo','working','working'),
(26,'Snega D',10,'working','windows 10 pro','4.00 GB','intel core i3','working','working'),
(28,'Tamil V',11,'visual C++2019','windows 8.1','4.00 GB','INTEL CORE i3','working','working'),
(27,'Srinidhi S',12,'visual C++2019','windows 8.1','2.00 GB','INTEL CORE i3','working','working'),
(23,'Santhiya S',13,'not supported by this processor type','windows 10 pro','4.00 GB','Intel Core 2 Duo','working','Working'),
(7,'Gnanagowsalya K',14,'working','windows 10 ProN','8.00 GB','INTEL CORE i5','working','working'),
(11,'Jothika J',15,'working','Windows 8.1 Pro','4.00 GB','INTEL CORE i3','working','working'),
(8,'Hajeera Sithika L',16,'working','windows 8.1','2GB','Intel Core 2 Duo','working','working'),
(6,'Ghouse bi S',18,'working','Windows 8.1 Pro','4GB','INTEL CORE i3',' working','working'),
(29,'Vinu Andrews S',33,'working','windows 8.1','2gb','Intel Core 2 Duo',' working','working'),
(21,'Roobankumar  K',34,'processor not supported','windows 7 ultimate','2.00GB','intel core 2 duo','working','working'),
(3,'Aysha sithika L',17,'WORKING','windows 10 pro','2GB','INTEL CORE i3','working','working'),
(18,'Priya S',23,'not  support by this processer tryp','windows 7 proffessional','4.00GP','INTEL CORE i3','working','working'),
(14,'Komaladevi. S',7,'visualc++2019','Windows 8.1 Pro','4.00  GB','Intel Pentium','Working','Working'),
(12,'Kalaiarasan A',32,'working','Windows 8.1 Pro','4.00 GB','INTEL CORE i3','working','working'),
(1,'Abdul Rahman  B',42,'working','windows 8.1 pro','2 Gb','Intel Pentium','working','workimg'),
(2,'Arun T',43,'working','windows 8.1','2.00GB','Intel Core 2 Duo','working','working'),
(17,'Prasanth P',35,'C++2019','Windows 10 Pro','2.00 GB','Intel Pentium','Working','working'),
(30,'Yogarajan K',36,'Not supported by the processor','windows 10 pro','2 GB RAM ','Intel Pentium','working','working'),
(25,'Saravanan M',37,'Working','Windows 8.1 Pro','4.00 GB','INTEL CORE i3','Working','Working'),
(9,'HARIHARAN A',38,'working','windows 8.1 pro','4.00 GB','INTEL CORE i3','working','working'),
(20,'Raghul S',39,'not supported by the processor','windows 7','2.00 GB','Intel Pentium','Working','working'),
(16,'Narayanan S',19,'Working','windows 8.1','4.00GB','INTEL CORE i3','working','working');
select * from system_details;
alter table system_details add column details_id  int not null after SNO;
alter table system_details add foreign key (details_id) references ai_batch_01(SNO);
update system_details set details_id =
case SNO
when 1 then 1
when 2 then 2
when 3 then 3
when 4 then 4
when 5 then 5
when 6 then 6
when 7 then 7
when 8 then 8
when 9 then 9
when 10 then 10
when 11 then 11
when 12 then 12
when 13 then 13
when 14 then 14
when 15 then 15
when 16 then 16
when 17 then 17
when 18 then 18
when 19 then 19
when 20 then 20
when 21 then 21
when 22 then 22
when 23 then 23
when 24 then 24
when 25 then 25
when 26 then 26
when 27 then 27
when 28 then 28
when 29 then 29
when 30 then 30
end