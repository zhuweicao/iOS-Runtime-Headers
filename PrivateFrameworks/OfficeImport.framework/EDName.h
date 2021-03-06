/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDFormula, EDString, NSString, OITSUPointerKeyDictionary;

@interface EDName : NSObject {
    EDFormula *_formula;
    NSString *_formulaString;
    OITSUPointerKeyDictionary *_maxWorksheetReferences;
    EDString *_nameString;
    unsigned int _sheetIndex;
}

@property(readonly) EDFormula * formula;
@property(readonly) NSString * internalFunctionName;
@property(readonly) BOOL isInternalFunction;
@property(readonly) OITSUPointerKeyDictionary * maxWorksheetReferences;
@property(retain) EDString * nameString;
@property unsigned int sheetIndex;

+ (id)name;

- (void)dealloc;
- (id)formula;
- (id)formulaString;
- (unsigned int)hash;
- (id)init;
- (id)internalFunctionName;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEDName:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isInternalFunction;
- (id)maxWorksheetReferences;
- (id)nameString;
- (void)setFormula:(id)arg1 workbook:(id)arg2;
- (void)setFormulaString:(id)arg1 workbook:(id)arg2;
- (void)setNameString:(id)arg1;
- (void)setSheetIndex:(unsigned int)arg1;
- (unsigned int)sheetIndex;

@end
