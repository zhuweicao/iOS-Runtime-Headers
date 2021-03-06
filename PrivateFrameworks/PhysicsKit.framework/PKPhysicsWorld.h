/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <PKPhysicsContactDelegate>, NSMutableArray, NSMutableDictionary;

@interface PKPhysicsWorld : NSObject <NSCoding> {
    double _accumulatedDt;
    NSMutableArray *_bodies;
    struct PKContactListener { 
        int (**_vptr$b2ContactListener)(); 
        NSMutableDictionary *_contacts; 
        <PKPhysicsContactDelegate> *_contactDelegate; 
    } _contactListener;
    bool _doSleep;
    struct b2Vec2 { 
        float x; 
        float y; 
    } _gravity;
    NSMutableArray *_joints;
    NSMutableArray *_postStepBlocks;
    float _speed;
    struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; bool x_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct __hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __hash_node<int, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<int, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, std::__1::allocator<std::__1::__hash_node<int, void *> > > { struct __hash_node_base<std::__1::__hash_node<int, void *> *> { struct __hash_node<int, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<int> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<int> > { float x_4_4_1; } x_1_3_4; } x_4_2_1; } x_3_1_4; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { float x_4_4_1; } x_1_3_4; } x_5_2_1; } x_3_1_5; struct unordered_set<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct __hash_table<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct unique_ptr<std::__1::__hash_node<b2Contact *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<b2Contact *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __hash_node<b2Contact *, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *> *>, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> > > { struct __hash_node_base<std::__1::__hash_node<b2Contact *, void *> *> { struct __hash_node<b2Contact *, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<b2Contact *> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<b2Contact *> > { float x_4_4_1; } x_1_3_4; } x_6_2_1; } x_3_1_6; int x_3_1_7; } x3; struct b2Body {} *x4; struct b2Joint {} *x5; int x6; int x7; struct PKCAether {} *x8; bool x9; struct b2DestructionListener {} *x10; struct b2Draw {} *x11; float x12; bool x13; bool x14; bool x15; bool x16; double x17; float x18; struct PKCMechanics { struct b2World {} *x_19_1_1; struct vector<QuadTree *, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_2_2_1; struct QuadTree {} **x_2_2_2; struct __compressed_pair<QuadTree **, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_3_3_1; } x_2_2_3; } x_19_1_2; } x19; } *_world;
    struct PKDebugDrawPacket { 
        struct vector<PKPoint, std::__1::allocator<PKPoint> > { 
            struct { /* ? */ } *__begin_; 
            struct { /* ? */ } *__end_; 
            struct __compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > { 
                struct { /* ? */ } *__first_; 
            } __end_cap_; 
        } _linePoints; 
        struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > { 
            struct { /* ? */ } *__begin_; 
            struct { /* ? */ } *__end_; 
            struct __compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > { 
                struct { /* ? */ } *__first_; 
            } __end_cap_; 
        } _colors; 
    } drawPacket;
}

@property(retain) NSMutableArray * _bodies;
@property bool _doSleep;
@property struct b2Vec2 { float x1; float x2; } _gravity;
@property(readonly) struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; bool x_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; struct x_3_1_4; void*x_3_1_5; void*x_3_1_6; void*x_3_1_7; void*x_3_1_8; void*x_3_1_9; void*x_3_1_10; void*x_3_1_11; void*x_3_1_12; void*x_3_1_13; void*x_3_1_14; void*x_3_1_15; void*x_3_1_16; SEL x_3_1_17; void*x_3_1_18; void*x_3_1_19; void*x_3_1_20; void*x_3_1_21; void*x_3_1_22; void*x_3_1_23; long x_3_1_24; void*x_3_1_25; void*x_3_1_26; void*x_3_1_27; void*x_3_1_28; void*x_3_1_29; void*x_3_1_30; void*x_3_1_31; void*x_3_1_32; void*x_3_1_33; void*x_3_1_34; void*x_3_1_35; void*x_3_1_36; void*x_3_1_37; void*x_3_1_38; void*x_3_1_39; SEL x_3_1_40; void*x_3_1_41; void*x_3_1_42; void*x_3_1_43; void*x_3_1_44; void*x_3_1_45; void*x_3_1_46; void*x_3_1_47; void*x_3_1_48; void*x_3_1_49; void*x_3_1_50; void*x_3_1_51; int x_3_1_52; void*x_3_1_53; void*x_3_1_54; void*x_3_1_55; void*x_3_1_56; void*x_3_1_57; void*x_3_1_58; void*x_3_1_59; void*x_3_1_60; void*x_3_1_61; void*x_3_1_62; void*x_3_1_63; void*x_3_1_64; void*x_3_1_65; void*x_3_1_66; void*x_3_1_67; void*x_3_1_68; void*x_3_1_69; void*x_3_1_70; void*x_3_1_71; void*x_3_1_72; void*x_3_1_73; void*x_3_1_74; void*x_3_1_75; void*x_3_1_76; void*x_3_1_77; void*x_3_1_78; void*x_3_1_79; void*x_3_1_80; void*x_3_1_81; void*x_3_1_82; void*x_3_1_83; void*x_3_1_84; void*x_3_1_85; void*x_3_1_86; void*x_3_1_87; void*x_3_1_88; void*x_3_1_89; void*x_3_1_90; void*x_3_1_91; void*x_3_1_92; void*x_3_1_93; void*x_3_1_94; void*x_3_1_95; void*x_3_1_96; void*x_3_1_97; void*x_3_1_98; void*x_3_1_99; void*x_3_1_100; void*x_3_1_101; void*x_3_1_102; void*x_3_1_103; void*x_3_1_104; void*x_3_1_105; void*x_3_1_106; void*x_3_1_107; void*x_3_1_108; void*x_3_1_109; void*x_3_1_110; void*x_3_1_111; void*x_3_1_112; void*x_3_1_113; void*x_3_1_114; void*x_3_1_115; void*x_3_1_116; void*x_3_1_117; void*x_3_1_118; void*x_3_1_119; void*x_3_1_120; void*x_3_1_121; void*x_3_1_122; void*x_3_1_123; long long x_3_1_124; void*x_3_1_125; } x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; Class x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; id x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; unsigned int x65; void*x66; void*x67; union x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; unsigned short x78; void*x79; short x80; void*x81; void*x82; void*x83; void*x84; unsigned long x85; int x86; unsigned int x87/* : ? */; const void*x88; const void*x89; void*x90; void*x91; const int x92; void x93; void*x94; void*x95; void*x96; void*x97; const void*x98; void*x99; void*x100; void*x101; out const void*x102; short x103; void*x104; unsigned char x105; out void*x106; void*x107; void*x108; in int x109; BOOL x110; void*x111; void*x112; int x113; out in short x114; void*x115; int x116; long x117; void*x118; void*x119; const void*x120; float x121; const void*x122; void*x123; void*x124; void*x125; out const void*x126; void*x127; void*x128; long x129; void*x130; void*x131; void*x132; BOOL x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; union x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; long long x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; BOOL x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; long x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; unsigned long x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; short x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; unsigned long long x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; }* _world; /* unknown property attribute:  std::__1::allocator<QuadTree *> >=^^{QuadTree}}}}} */
@property(readonly) /* Warning: unhandled struct encoding: '{PKCAether={vector<std::__1::weak_ptr<PKCField>' */ struct * aether; /* unknown property attribute:  std::__1::allocator<std::__1::weak_ptr<PKCField> > >=^{weak_ptr<PKCField>}}}} */
@property <PKPhysicsContactDelegate> * contactDelegate;
@property struct CGVector { float x1; float x2; } gravity;
@property float speed;
@property float velocityThreshold;

+ (id)world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__init__;
- (id)_bodies;
- (bool)_doSleep;
- (struct b2Vec2 { float x1; float x2; })_gravity;
- (void)_runBlockOutsideOfTimeStep:(id)arg1;
- (struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; bool x_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct __hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __hash_node<int, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<int, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, std::__1::allocator<std::__1::__hash_node<int, void *> > > { struct __hash_node_base<std::__1::__hash_node<int, void *> *> { struct __hash_node<int, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<int> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<int> > { float x_4_4_1; } x_1_3_4; } x_4_2_1; } x_3_1_4; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { float x_4_4_1; } x_1_3_4; } x_5_2_1; } x_3_1_5; struct unordered_set<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct __hash_table<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct unique_ptr<std::__1::__hash_node<b2Contact *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<b2Contact *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __hash_node<b2Contact *, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *> *>, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> > > { struct __hash_node_base<std::__1::__hash_node<b2Contact *, void *> *> { struct __hash_node<b2Contact *, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<b2Contact *> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<b2Contact *> > { float x_4_4_1; } x_1_3_4; } x_6_2_1; } x_3_1_6; int x_3_1_7; } x3; struct b2Body {} *x4; struct b2Joint {} *x5; int x6; int x7; struct PKCAether {} *x8; bool x9; struct b2DestructionListener {} *x10; struct b2Draw {} *x11; float x12; bool x13; bool x14; bool x15; bool x16; double x17; float x18; struct PKCMechanics { struct b2World {} *x_19_1_1; struct vector<QuadTree *, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_2_2_1; struct QuadTree {} **x_2_2_2; struct __compressed_pair<QuadTree **, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_3_3_1; } x_2_2_3; } x_19_1_2; } x19; }*)_world;
- (void)addBody:(id)arg1;
- (void)addField:(id)arg1;
- (void)addJoint:(id)arg1;
- (struct PKCAether { struct vector<std::__1::weak_ptr<PKCField>, std::__1::allocator<std::__1::weak_ptr<PKCField> > > { struct weak_ptr<PKCField> {} *x_1_1_1; struct weak_ptr<PKCField> {} *x_1_1_2; struct __compressed_pair<std::__1::weak_ptr<PKCField> *, std::__1::allocator<std::__1::weak_ptr<PKCField> > > { struct weak_ptr<PKCField> {} *x_3_2_1; } x_1_1_3; } x1; }*)aether;
- (id)bodies;
- (id)bodyAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2;
- (id)bodyAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)bodyInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)collisionDelegate;
- (id)contactDelegate;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)debugDraw:(float)arg1 matrix:(union _GLKMatrix4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg2 showsPhysics:(bool)arg3 showsOutlineInterior:(bool)arg4 showsFields:(bool)arg5;
- (const struct PKDebugDrawPacket { struct vector<PKPoint, std::__1::allocator<PKPoint> > { struct { /* ? */ } *x_1_1_1; struct { /* ? */ } *x_1_1_2; struct __compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > { struct { /* ? */ } *x_3_2_1; } x_1_1_3; } x1; struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > { struct { /* ? */ } *x_2_1_1; struct { /* ? */ } *x_2_1_2; struct __compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > { struct { /* ? */ } *x_3_2_1; } x_2_1_3; } x2; }*)debugDrawPacket;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2 usingBlock:(id)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint { float x1; float x2; })arg1 usingBlock:(id)arg2;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usingBlock:(id)arg2;
- (struct CGVector { float x1; float x2; })evalForce:(unsigned int)arg1 point:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGVector { float x1; float x2; })gravity;
- (BOOL)hasBodies;
- (BOOL)hasFields;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)joints;
- (void)removeAllBodies;
- (void)removeAllFields;
- (void)removeAllJoints;
- (void)removeBody:(id)arg1;
- (void)removeField:(id)arg1;
- (void)removeJoint:(id)arg1;
- (struct CGVector { float x1; float x2; })sampleFields:(struct CGPoint { float x1; float x2; })arg1;
- (id)sampleFields:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 categories:(unsigned int)arg2 dataSize:(struct CGSize { float x1; float x2; })arg3;
- (/* Warning: Unrecognized filer type: '2' using 'void*' */ void*)sampleFieldsAt:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: 24@0:48 */

- (void)setCollisionDelegate:(id)arg1;
- (void)setContactDelegate:(id)arg1;
- (void)setGravity:(struct CGVector { float x1; float x2; })arg1;
- (void)setSpeed:(float)arg1;
- (void)setVelocityThreshold:(float)arg1;
- (void)set_bodies:(id)arg1;
- (void)set_doSleep:(bool)arg1;
- (void)set_gravity:(struct b2Vec2 { float x1; float x2; })arg1;
- (float)speed;
- (BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned int)arg2 positionIterations:(unsigned int)arg3;
- (float)velocityThreshold;

@end
