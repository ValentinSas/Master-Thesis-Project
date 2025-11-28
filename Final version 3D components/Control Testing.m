%% 1
clear all
clc
%% 2 deget normal( pod palma->varf deget)
syms alf fi th1 th2 th3 l1 l2 l3 d e
% fi=60;
% th1=90;
% th2=45;
% th3=30;
% l1=9;
% l2=6;
% l3=3;
R0=[round(cos(deg2rad(alf)),2) -round(sin(deg2rad(alf)),2) 0 0; round(sin(deg2rad(alf)),2) round(cos(deg2rad(alf)),2) 0 0;0 0 1 0;0 0 0 1];
R1=[round(cos(deg2rad(fi)),2) -round(sin(deg2rad(fi)),2) 0 0; round(sin(deg2rad(fi)),2) round(cos(deg2rad(fi)),2) 0 0;0 0 1 0;0 0 0 1];
R=[1 0 0 0;0 round(cos(pi/2),2) round(-sin(pi/2),2) 0; 0 round(sin(pi/2),2) round(cos(pi/2),2) 0;0 0 0 1];
R2=[round(cos(deg2rad(th1)),2) -round(sin(deg2rad(th1)),2) 0 0; round(deg2rad(sin(th1)),2) round(cos(deg2rad(th1)),2) 0 0;0 0 1 0;0 0 0 1];
R3=[round(cos(deg2rad(th2)),2) -round(sin(deg2rad(th2)),2) 0 0; round(sin(deg2rad(th2)),2) round(cos(deg2rad(th2)),2) 0 0;0 0 1 0;0 0 0 1];
R4=[round(cos(deg2rad(th3)),2) -round(sin(deg2rad(th3)),2) 0 0; round(sin(deg2rad(th3)),2) round(cos(deg2rad(th3)),2) 0 0;0 0 1 0;0 0 0 1];

T0=[1 0 0 d;0 1 0 0;0 0 1 0;0 0 0 1];
Te=[1 0 0 e;0 1 0 0;0 0 1 0;0 0 0 1];
T1=[1 0 0 l1;0 1 0 0;0 0 1 0;0 0 0 1];
T2=[1 0 0 l2;0 1 0 0;0 0 1 0;0 0 0 1];
T3=[1 0 0 l3;0 1 0 0;0 0 1 0;0 0 0 1];

T11=R0*T0*R1*R*Te*R2*T1*R3*T2*R4*T3
%% 3 deget opozabil( pod palma->varf deget)
syms alf psi del fi th th1 th2 l1 l2 l3 d e
% fi=60;
% th1=90;
% th2=45;
% th3=30;
% l1=9;
% l2=6;
% l3=3;
R0=[round(cos(deg2rad(alf)),2) -round(sin(deg2rad(alf)),2) 0 0; round(sin(deg2rad(alf)),2) round(cos(deg2rad(alf)),2) 0 0;0 0 1 0;0 0 0 1];
R1=[round(cos(deg2rad(th)),2) -round(sin(deg2rad(th)),2) 0 0; round(sin(deg2rad(th)),2) round(cos(deg2rad(th)),2) 0 0;0 0 1 0;0 0 0 1];
R=[1 0 0 0;0 round(cos(pi/2),2) round(-sin(pi/2),2) 0; 0 round(sin(pi/2),2) round(cos(pi/2),2) 0;0 0 0 1];
R2=[round(cos(deg2rad(th1)),2) -round(sin(deg2rad(th1)),2) 0 0; round(deg2rad(sin(th1)),2) round(cos(deg2rad(th1)),2) 0 0;0 0 1 0;0 0 0 1];
R3=[round(cos(deg2rad(th2)),2) -round(sin(deg2rad(th2)),2) 0 0; round(sin(deg2rad(th2)),2) round(cos(deg2rad(th2)),2) 0 0;0 0 1 0;0 0 0 1];
Ry=[round(cos(deg2rad(psi)),2) 0 round(sin(deg2rad(psi)),2)  0;0 1 0 0 ;-round(sin(deg2rad(psi)),2) 0 round(cos(deg2rad(psi)),2)  0;0 0 0 1];
R4=[round(cos(deg2rad(del)),2) -round(sin(deg2rad(del)),2) 0 0; round(sin(deg2rad(del)),2) round(cos(deg2rad(del)),2) 0 0;0 0 1 0;0 0 0 1];
Ry1=[round(cos(pi/2),2) 0 round(sin(pi/2),2)  0;0 1 0 0 ;-round(sin(pi/2),2) 0 round(cos(pi/2),2)  0;0 0 0 1];


T0=[1 0 0 d;0 1 0 0;0 0 1 0;0 0 0 1];
Te=[1 0 0 0;0 1 0 0;0 0 1 e;0 0 0 1];
T1=[1 0 0 l1;0 1 0 0;0 0 1 0;0 0 0 1];
T2=[1 0 0 l2;0 1 0 0;0 0 1 0;0 0 0 1];

T12=R0*T0*R*R1*Ry*Te*R4*Ry1*R2*T1*R3*T2