/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKGreenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource> {
    PKFelicaPassProperties * _properties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PKFelicaPassProperties *properties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFelicaProperty:(id)arg1;
- (unsigned int)numberOfLegs;
- (id)properties;
- (id)titleForLeg:(unsigned int)arg1;
- (int)transitTicketDetailNumberOfRowsForLeg:(unsigned int)arg1;
- (id)transitTicketDetailTitleForRow:(unsigned int)arg1 leg:(unsigned int)arg2;
- (id)transitTicketDetailValueForRow:(unsigned int)arg1 leg:(unsigned int)arg2;

@end
