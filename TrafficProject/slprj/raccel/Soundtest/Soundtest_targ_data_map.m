  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
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
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtP.Counter_CountStep
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Post_1_CountStep
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Post_2_CountStep
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Post_3_CountStep
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Post_4_CountStep
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Comparator_const
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Comparator_const_d033brb2vo
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Comparator_const_pioesafcgo
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Comparator_const_m25y23yiup
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtP.Reset_7_const
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Comparator_1_const
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Comparator_2_const
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Comparator_3_const
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Comparator_4_const
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Comparator_1_const_g3nu3rgqbw
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Comparator_2_const_lagsbyf4qy
	  section.data(7).logicalSrcIdx = 15;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Comparator_3_const_pwsaox3pev
	  section.data(8).logicalSrcIdx = 16;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Comparator_4_const_dgd5oe5hfm
	  section.data(9).logicalSrcIdx = 17;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% rtP.GeneratedFilterBlock_InitialStates
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.GeneratedFilterBlock_Coefficients
	  section.data(2).logicalSrcIdx = 19;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.GeneratedFilterBlock_InitialStates_niatik3e4q
	  section.data(3).logicalSrcIdx = 20;
	  section.data(3).dtTransOffset = 1815;
	
	  ;% rtP.GeneratedFilterBlock_Coefficients_oug5f0iyou
	  section.data(4).logicalSrcIdx = 21;
	  section.data(4).dtTransOffset = 1816;
	
	  ;% rtP.GeneratedFilterBlock_InitialStates_lmekea2412
	  section.data(5).logicalSrcIdx = 22;
	  section.data(5).dtTransOffset = 3630;
	
	  ;% rtP.GeneratedFilterBlock_Coefficients_o0bzmpfr3u
	  section.data(6).logicalSrcIdx = 23;
	  section.data(6).dtTransOffset = 3631;
	
	  ;% rtP.GeneratedFilterBlock_InitialStates_a1rnyibp4y
	  section.data(7).logicalSrcIdx = 24;
	  section.data(7).dtTransOffset = 5445;
	
	  ;% rtP.GeneratedFilterBlock_Coefficients_fhy1dmuvmq
	  section.data(8).logicalSrcIdx = 25;
	  section.data(8).dtTransOffset = 5446;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtP.Switch_wrap_Threshold
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Switch_wrap_Threshold_ilxisw3115
	  section.data(2).logicalSrcIdx = 27;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Switch_wrap_Threshold_ey0zfbgwj3
	  section.data(3).logicalSrcIdx = 28;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Switch_wrap_Threshold_alk1tdmjnq
	  section.data(4).logicalSrcIdx = 29;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Switch_wrap_Threshold_lcat5sauc4
	  section.data(5).logicalSrcIdx = 30;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% rtP.Mod_value_Value
	  section.data(1).logicalSrcIdx = 31;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Mod_value_Value_pfmi5sjsyq
	  section.data(2).logicalSrcIdx = 32;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Switch_wrap_Threshold_nqdzfhyfsb
	  section.data(3).logicalSrcIdx = 33;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Mod_value_Value_hyfgccsjyk
	  section.data(4).logicalSrcIdx = 34;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Mod_value_Value_ouagenfdcs
	  section.data(5).logicalSrcIdx = 35;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.Switch_wrap_Threshold_ccptq0vysg
	  section.data(6).logicalSrcIdx = 36;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Mod_value_Value_d2hq32y35n
	  section.data(7).logicalSrcIdx = 37;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Mod_value_Value_ollj1kioal
	  section.data(8).logicalSrcIdx = 38;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Switch_wrap_Threshold_nqfooyrgjc
	  section.data(9).logicalSrcIdx = 39;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.Mod_value_Value_co1alzad4v
	  section.data(10).logicalSrcIdx = 40;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.Mod_value_Value_co2rbcel4i
	  section.data(11).logicalSrcIdx = 41;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.Switch_wrap_Threshold_ipekyipjv5
	  section.data(12).logicalSrcIdx = 42;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.Mod_value_Value_aaywqtzjrm
	  section.data(13).logicalSrcIdx = 43;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.Mod_value_Value_ez5ekr1h5l
	  section.data(14).logicalSrcIdx = 44;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.Switch_wrap_Threshold_gqqppszgtc
	  section.data(15).logicalSrcIdx = 45;
	  section.data(15).dtTransOffset = 14;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 19;
      section.data(19)  = dumData; %prealloc
      
	  ;% rtP.Free_running_or_modulo_Value
	  section.data(1).logicalSrcIdx = 46;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.const_load_Value
	  section.data(2).logicalSrcIdx = 47;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Free_running_or_modulo_Value_pa1sfshgyy
	  section.data(3).logicalSrcIdx = 48;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.const_load_Value_de3qw32hgi
	  section.data(4).logicalSrcIdx = 49;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Free_running_or_modulo_Value_lpk1sphxlx
	  section.data(5).logicalSrcIdx = 50;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.const_load_Value_dtby5pprax
	  section.data(6).logicalSrcIdx = 51;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.Free_running_or_modulo_Value_fxpzz5wo0e
	  section.data(7).logicalSrcIdx = 52;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.const_load_Value_mwh51w42oa
	  section.data(8).logicalSrcIdx = 53;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Free_running_or_modulo_Value_h5efkkinpr
	  section.data(9).logicalSrcIdx = 54;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.const_load_Value_iqbiffpytv
	  section.data(10).logicalSrcIdx = 55;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.const_dir_Value
	  section.data(11).logicalSrcIdx = 56;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.const_dir_Value_dvidi3pjbj
	  section.data(12).logicalSrcIdx = 57;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.const_rst_Value
	  section.data(13).logicalSrcIdx = 58;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.const_dir_Value_gdz2gdxwjs
	  section.data(14).logicalSrcIdx = 59;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.const_rst_Value_iktdo5gxcw
	  section.data(15).logicalSrcIdx = 60;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.const_dir_Value_isja52yvkp
	  section.data(16).logicalSrcIdx = 61;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.const_rst_Value_kby3yeewcc
	  section.data(17).logicalSrcIdx = 62;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.const_dir_Value_jnp44nu52s
	  section.data(18).logicalSrcIdx = 63;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.const_rst_Value_kcy5vsg3r5
	  section.data(19).logicalSrcIdx = 64;
	  section.data(19).dtTransOffset = 18;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 30;
      section.data(30)  = dumData; %prealloc
      
	  ;% rtP.Init_value_Value
	  section.data(1).logicalSrcIdx = 65;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.const_load_val_Value
	  section.data(2).logicalSrcIdx = 66;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.From_value_Value
	  section.data(3).logicalSrcIdx = 67;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Constant_Value
	  section.data(4).logicalSrcIdx = 68;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.Init_value_Value_p0egjy1hzz
	  section.data(5).logicalSrcIdx = 69;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.const_load_val_Value_fbmg2xziyv
	  section.data(6).logicalSrcIdx = 70;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.From_value_Value_gy12crc3fm
	  section.data(7).logicalSrcIdx = 71;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.Constant_Value_date50fpml
	  section.data(8).logicalSrcIdx = 72;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.Init_value_Value_oxrom1yvr2
	  section.data(9).logicalSrcIdx = 73;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.const_load_val_Value_ae5sfrtanm
	  section.data(10).logicalSrcIdx = 74;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.From_value_Value_pws1nszmok
	  section.data(11).logicalSrcIdx = 75;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.Constant_Value_b1wde2d4ks
	  section.data(12).logicalSrcIdx = 76;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.Init_value_Value_hfvjow5qjd
	  section.data(13).logicalSrcIdx = 77;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.const_load_val_Value_bmmopv0qum
	  section.data(14).logicalSrcIdx = 78;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.From_value_Value_cee0qult2g
	  section.data(15).logicalSrcIdx = 79;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.Constant_Value_hk2g3vr2ni
	  section.data(16).logicalSrcIdx = 80;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.Init_value_Value_dzhbzxnf55
	  section.data(17).logicalSrcIdx = 81;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.const_load_val_Value_dglxkdn0vc
	  section.data(18).logicalSrcIdx = 82;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.From_value_Value_in33eojgx2
	  section.data(19).logicalSrcIdx = 83;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtP.Constant_Value_oqpfb3zgy2
	  section.data(20).logicalSrcIdx = 84;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtP.Count_reg_InitialCondition
	  section.data(21).logicalSrcIdx = 85;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtP.Count_reg_InitialCondition_f54ov2skey
	  section.data(22).logicalSrcIdx = 86;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtP.Count_reg_InitialCondition_exbsx0wihj
	  section.data(23).logicalSrcIdx = 87;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtP.Count_reg_InitialCondition_c3rgtkvq2p
	  section.data(24).logicalSrcIdx = 88;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtP.Count_reg_InitialCondition_lcttsx30ps
	  section.data(25).logicalSrcIdx = 89;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtP.Step_value_Value
	  section.data(26).logicalSrcIdx = 90;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtP.Step_value_Value_l4spz3550o
	  section.data(27).logicalSrcIdx = 91;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtP.Step_value_Value_ln0o53q5vb
	  section.data(28).logicalSrcIdx = 92;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtP.Step_value_Value_hd3zbq5j43
	  section.data(29).logicalSrcIdx = 93;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtP.Step_value_Value_c3g5okkrrz
	  section.data(30).logicalSrcIdx = 94;
	  section.data(30).dtTransOffset = 29;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
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
    nTotSects     = 3;
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
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtB.czfifsj3oz
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ib03hsddxr
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.b1vih2woof
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.ft1a0n1ehw
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.ccpkoltuba
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.nf5sepae1r
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtB.fcsadje32p
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.nlywfjb45m
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.l5a4frtxi0
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.dheywqcnzn
	  section.data(4).logicalSrcIdx = 9;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.id30cwmetj
	  section.data(5).logicalSrcIdx = 10;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.ndglj50x2z
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
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
    nTotSects     = 3;
    sectIdxOffset = 3;
    
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
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% rtDW.dsbvr4pwev
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.diy0fulw1v
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1813;
	
	  ;% rtDW.mxbfh1v4sm
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3626;
	
	  ;% rtDW.jddebgpoxa
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5439;
	
	  ;% rtDW.kedb2llvpb
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 7252;
	
	  ;% rtDW.akjj2jujhy
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7389;
	
	  ;% rtDW.htn3npmpyc
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 7394;
	
	  ;% rtDW.mrwavk3rtu
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7405;
	
	  ;% rtDW.ochg21hd4z
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 7542;
	
	  ;% rtDW.cq5nh4i3nk
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 7547;
	
	  ;% rtDW.ht3ddrfrpg
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 7558;
	
	  ;% rtDW.if0df2k4g4
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 7695;
	
	  ;% rtDW.jwyc3nvniv
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 7700;
	
	  ;% rtDW.plhtbthenu
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 7711;
	
	  ;% rtDW.dxcnleurn5
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 7848;
	
	  ;% rtDW.et3cfpbuuj
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 7853;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% rtDW.epst4lnx3h.LoggedData
	  section.data(1).logicalSrcIdx = 16;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jlxac0ng14.AQHandles
	  section.data(2).logicalSrcIdx = 17;
	  section.data(2).dtTransOffset = 3;
	
	  ;% rtDW.pdrmu0rn2a.AQHandles
	  section.data(3).logicalSrcIdx = 18;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtDW.eesyvxjae3.AQHandles
	  section.data(4).logicalSrcIdx = 19;
	  section.data(4).dtTransOffset = 5;
	
	  ;% rtDW.pux1ryd5f4.AQHandles
	  section.data(5).logicalSrcIdx = 20;
	  section.data(5).dtTransOffset = 6;
	
	  ;% rtDW.hj1jo00r1w.AQHandles
	  section.data(6).logicalSrcIdx = 21;
	  section.data(6).dtTransOffset = 7;
	
	  ;% rtDW.pw5i2w0o13.AQHandles
	  section.data(7).logicalSrcIdx = 22;
	  section.data(7).dtTransOffset = 8;
	
	  ;% rtDW.phxtloxrej.AQHandles
	  section.data(8).logicalSrcIdx = 23;
	  section.data(8).dtTransOffset = 9;
	
	  ;% rtDW.keftty1qrf.AQHandles
	  section.data(9).logicalSrcIdx = 24;
	  section.data(9).dtTransOffset = 10;
	
	  ;% rtDW.lnnvcjvznh.AQHandles
	  section.data(10).logicalSrcIdx = 25;
	  section.data(10).dtTransOffset = 11;
	
	  ;% rtDW.b0vyhzhvoh.AQHandles
	  section.data(11).logicalSrcIdx = 26;
	  section.data(11).dtTransOffset = 12;
	
	  ;% rtDW.d4nv2evlo1.AQHandles
	  section.data(12).logicalSrcIdx = 27;
	  section.data(12).dtTransOffset = 13;
	
	  ;% rtDW.aipq0nlcyw.AQHandles
	  section.data(13).logicalSrcIdx = 28;
	  section.data(13).dtTransOffset = 14;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtDW.kswstcvok1
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jrgwrnn5oz
	  section.data(2).logicalSrcIdx = 30;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.macf3k4cd4
	  section.data(3).logicalSrcIdx = 31;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.pqdbhjf5ay
	  section.data(4).logicalSrcIdx = 32;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.hrh4xyuoiw
	  section.data(5).logicalSrcIdx = 33;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
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


  targMap.checksum0 = 4180985868;
  targMap.checksum1 = 3928969692;
  targMap.checksum2 = 2080150678;
  targMap.checksum3 = 768653082;

