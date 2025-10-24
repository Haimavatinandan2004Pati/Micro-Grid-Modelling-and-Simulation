    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 58;
            section.data(58)  = dumData; %prealloc

                    ;% rtP.Constant_Value
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Constant_Value_odsjjxhutl
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Constant_Value_iwekyg2z5g
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.TransferFcn1_A
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.TransferFcn1_C
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Saturation_UpperSat
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Saturation_LowerSat
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.StateSpace_P1_Size
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.StateSpace_P1
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 9;

                    ;% rtP.StateSpace_P2_Size
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 137;

                    ;% rtP.StateSpace_P2
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 139;

                    ;% rtP.StateSpace_P3_Size
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 143;

                    ;% rtP.StateSpace_P3
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 145;

                    ;% rtP.StateSpace_P4_Size
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 147;

                    ;% rtP.StateSpace_P4
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 149;

                    ;% rtP.StateSpace_P5_Size
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 773;

                    ;% rtP.StateSpace_P5
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 775;

                    ;% rtP.StateSpace_P6_Size
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 781;

                    ;% rtP.StateSpace_P6
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 783;

                    ;% rtP.StateSpace_P7_Size
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 786;

                    ;% rtP.StateSpace_P7
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 788;

                    ;% rtP.StateSpace_P8_Size
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 791;

                    ;% rtP.StateSpace_P8
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 793;

                    ;% rtP.StateSpace_P9_Size
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 796;

                    ;% rtP.StateSpace_P9
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 798;

                    ;% rtP.StateSpace_P10_Size
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 799;

                    ;% rtP.StateSpace_P10
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 801;

                    ;% rtP.CurrentFilter_A
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 802;

                    ;% rtP.CurrentFilter_C
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 803;

                    ;% rtP.Initialit_InitialCondition
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 804;

                    ;% rtP.CoulombCounter_UpperSat
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 805;

                    ;% rtP.CoulombCounter_LowerSat
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 806;

                    ;% rtP.Gain1_Gain
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 807;

                    ;% rtP.donotdeletethisgain_Gain
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 808;

                    ;% rtP.Gain1_Gain_plyejubh1e
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 809;

                    ;% rtP.Saturation_UpperSat_k3bm0knlts
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 810;

                    ;% rtP.Saturation_LowerSat_gtsxumhbdz
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 811;

                    ;% rtP.Integrator2_IC
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 812;

                    ;% rtP.Gain_Gain
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 813;

                    ;% rtP.Gain_Gain_jsklo00cx1
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 814;

                    ;% rtP.Gain1_Gain_f1lo10iae3
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 815;

                    ;% rtP.Gain2_Gain
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 816;

                    ;% rtP.Constant4_Value
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 817;

                    ;% rtP.Constant2_Value
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 818;

                    ;% rtP.uib2_Gain
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 819;

                    ;% rtP.HitCrossing_Offset
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 820;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 821;

                    ;% rtP.donotdeletethisgain_Gain_mjx303azsy
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 822;

                    ;% rtP.donotdeletethisgain_Gain_d4xgu1x4hh
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 823;

                    ;% rtP.Constant_Value_l4asnk125a
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 824;

                    ;% rtP.Constant1_Value
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 825;

                    ;% rtP.capacity_Value
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 826;

                    ;% rtP.constantK_Value
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 827;

                    ;% rtP.constantA_Value
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 828;

                    ;% rtP.constantB_Value
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 829;

                    ;% rtP.Constant_Value_ihbzrbcjcd
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 830;

                    ;% rtP.gate_Value
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 831;

                    ;% rtP.gate_Value_hfhtxagkxf
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 832;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 32;
            section.data(32)  = dumData; %prealloc

                    ;% rtB.ldemcwf00w
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.nakyvj04a1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.m2b1nfjmhc
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.h5vpotfg4s
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 5;

                    ;% rtB.jrlfdl2hqp
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 11;

                    ;% rtB.fbwybvroaj
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 12;

                    ;% rtB.ov0gfuixpn
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 13;

                    ;% rtB.n0iensv3c5
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 14;

                    ;% rtB.h1mp4mgbb3
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 15;

                    ;% rtB.lbbqsjji0m
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 16;

                    ;% rtB.pa0me12c1m
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 17;

                    ;% rtB.oaazhxapzu
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 18;

                    ;% rtB.n2fwe452jt
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 19;

                    ;% rtB.hh123vifhd
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 20;

                    ;% rtB.mjmt3wp12q
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 21;

                    ;% rtB.f1usjqoibe
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 22;

                    ;% rtB.miswuvizqy
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 23;

                    ;% rtB.l0pgeuedq0
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 24;

                    ;% rtB.i1dlj4fspj
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 25;

                    ;% rtB.bakgz2z12b
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 26;

                    ;% rtB.p3ifbgnqt5
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 27;

                    ;% rtB.eflbg3wwqo
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 28;

                    ;% rtB.pty04vevwg
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 29;

                    ;% rtB.i3yue2n4px
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 30;

                    ;% rtB.esc23sc1wa
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 31;

                    ;% rtB.awm2pfwfkk
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 32;

                    ;% rtB.iwt2pd3usf
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 33;

                    ;% rtB.d24vdz2yfj
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 34;

                    ;% rtB.d3e052cahd
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 35;

                    ;% rtB.exjjnufx5s
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 36;

                    ;% rtB.dgoxzfnrb5
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 37;

                    ;% rtB.hnc03my5wq
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 38;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtB.azfgmr0zid
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.jobxkikgee
                    section.data(2).logicalSrcIdx = 36;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 5;
        sectIdxOffset = 2;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.oo014pokhm
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.psxtjj5nlv
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.bdgs14std1
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.ifzhmqv4yg
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.b45dm2yqqa.LoggedData
                    section.data(2).logicalSrcIdx = 4;
                    section.data(2).dtTransOffset = 22;

                    ;% rtDW.jsq51btfco.LoggedData
                    section.data(3).logicalSrcIdx = 5;
                    section.data(3).dtTransOffset = 25;

                    ;% rtDW.ndlsejjrcp.LoggedData
                    section.data(4).logicalSrcIdx = 6;
                    section.data(4).dtTransOffset = 26;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.pyhkuc20o4
                    section.data(1).logicalSrcIdx = 7;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mllkig2dyu
                    section.data(2).logicalSrcIdx = 8;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% rtDW.nlaif3mn3j
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ius3yojd3t
                    section.data(2).logicalSrcIdx = 10;
                    section.data(2).dtTransOffset = 23;

                    ;% rtDW.c2cq3uyeea
                    section.data(3).logicalSrcIdx = 11;
                    section.data(3).dtTransOffset = 24;

                    ;% rtDW.oh3hln1yvn
                    section.data(4).logicalSrcIdx = 12;
                    section.data(4).dtTransOffset = 28;

                    ;% rtDW.h2z5p0rstn
                    section.data(5).logicalSrcIdx = 13;
                    section.data(5).dtTransOffset = 29;

                    ;% rtDW.btehitdfwy
                    section.data(6).logicalSrcIdx = 14;
                    section.data(6).dtTransOffset = 30;

                    ;% rtDW.hw4rczbcdr
                    section.data(7).logicalSrcIdx = 15;
                    section.data(7).dtTransOffset = 31;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.hfjuot02mh
                    section.data(1).logicalSrcIdx = 16;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.o1knzjdf2y
                    section.data(2).logicalSrcIdx = 17;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.oiercb2ob0
                    section.data(3).logicalSrcIdx = 18;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.c5q21oc2sp
                    section.data(4).logicalSrcIdx = 19;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.f3lyfy4pud
                    section.data(5).logicalSrcIdx = 20;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.lelsbvtlh3
                    section.data(6).logicalSrcIdx = 21;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3653411439;
    targMap.checksum1 = 3866566779;
    targMap.checksum2 = 3669353515;
    targMap.checksum3 = 4093746224;

