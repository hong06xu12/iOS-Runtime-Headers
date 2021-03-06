/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceView : UIView <NTKClockHardwareInput, NTKClockIconZoomAnimator, NTKContainerViewLayoutDelegate, NTKTimeTravelModuleViewTapClient, NTKTimeView, PUICCrownInputSequencerDelegate> {
    NSTimer * _accumulateTimeTravelEntryRotationTimeoutTimer;
    float  _accumulatedTimeTravelEntryRotation;
    double  _aggdTimeTravelMaximumOffset;
    NSDate * _aggdTimeTravelSessionStart;
    struct CGSize { 
        float width; 
        float height; 
    }  _boundsSizeForComputedLayouts;
    BOOL  _canHandleHardwareEvents;
    NSMutableDictionary * _complicationDisplayWrappers;
    NSMutableDictionary * _complicationLayouts;
    NSMutableDictionary * _complicationPickerViews;
    BOOL  _complicationsShowEditingContent;
    NSTimer * _crownIdleTimer;
    int  _dataMode;
    <NTKFaceViewDelegate> * _delegate;
    int  _detailMode;
    NSMutableDictionary * _editConfigurations;
    float  _editModeTransitionFraction;
    NTKFaceEditView * _editView;
    BOOL  _editing;
    int  _faceStyle;
    BOOL  _fastCrownMode;
    NSTimer * _fastCrownModeTimeoutTimer;
    NTKContainerView * _foregroundContainerView;
    int  _fromEditMode;
    BOOL  _frozen;
    NSMutableSet * _hiddenComplicationSlots;
    BOOL  _isBackgrounded;
    double  _lastCrownOffset;
    float  _maxIconDiameter;
    float  _minIconDiameter;
    BOOL  _needsImageQueueDiscardOnRender;
    BOOL  _needsRender;
    BOOL  _needsTraceOnRender;
    BOOL  _orbing;
    NSDate * _overrideDate;
    BOOL  _removedFromWindowDuringThisTransaction;
    BOOL  _renderWasIgnored;
    NSString * _resourceDirectory;
    NSDate * _scrubDate;
    NSString * _selectedComplicationSlot;
    BOOL  _shouldShowUnsnapshotableContent;
    BOOL  _showContentForUnadornedSnapshot;
    BOOL  _showsCanonicalContent;
    BOOL  _showsLockedUI;
    BOOL  _slow;
    BOOL  _statusIconVisible;
    BOOL  _timeScrubbing;
    UIImage * _timeTravelCaptionImage;
    NSString * _timeTravelCaptionKey;
    UIView * _timeTravelCaptionView;
    double  _timeTravelDistanceToTomorrowEnd;
    double  _timeTravelDistanceToYesterdayStart;
    NSDate * _timeTravelEnterDate;
    NTKTimeTravelModuleView * _timeTravelModuleView;
    UIView<NTKTimeView> * _timeView;
    int  _toEditMode;
    NSDate * _tomorrowEnd;
    BOOL  _transitioningBetweenLiveAndScrubbing;
    BOOL  _unadornedSnapshotRemoved;
    UIView * _unadornedSnapshotView;
    BOOL  _wasScrubbingAtStartOfTransition;
    NSDate * _yesterdayStart;
    BOOL  _zooming;
    NTKClockIconView * _zoomingIconView;
}

@property (nonatomic, readonly) float alphaForDimmedState;
@property (nonatomic) BOOL complicationsShowEditingContent;
@property (nonatomic, readonly) NSDate *currentDisplayDate;
@property (nonatomic) int dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKFaceViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int detailMode;
@property (nonatomic, readonly) float editModeTransitionFraction;
@property (nonatomic, retain) NTKFaceEditView *editView;
@property (nonatomic, readonly) BOOL editing;
@property (nonatomic) int faceStyle;
@property (nonatomic, readonly) UIView *foregroundContainerView;
@property (nonatomic, readonly) int fromEditMode;
@property (getter=isFrozen, nonatomic) BOOL frozen;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float maxIconDiameter;
@property (nonatomic, readonly) float minIconDiameter;
@property (nonatomic, readonly) BOOL orbing;
@property (nonatomic, copy) NSString *resourceDirectory;
@property (nonatomic, retain) NSString *selectedComplicationSlot;
@property (nonatomic) BOOL shouldShowUnsnapshotableContent;
@property (nonatomic) BOOL showContentForUnadornedSnapshot;
@property (nonatomic) BOOL showsCanonicalContent;
@property (nonatomic) BOOL showsLockedUI;
@property (getter=isSlow, nonatomic) BOOL slow;
@property (readonly) Class superclass;
@property (readonly) BOOL timeScrubbing;
@property (nonatomic, retain) UIView<NTKTimeView> *timeView;
@property (nonatomic, readonly) int toEditMode;
@property (nonatomic, retain) UIView *unadornedSnapshotView;
@property (nonatomic, readonly) BOOL zooming;
@property (nonatomic, readonly) NTKClockIconView *zoomingIconView;

+ (id)_additionalPrelaunchApplicationIdentifiers;
+ (int)_numberOfDetailModes;
+ (void)_prewarm;
+ (id)_swatchColorForColorOption:(id)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(int)arg1;
+ (id)_swatchImageForColorOption:(id)arg1;
+ (id)_swatchImageForEditOption:(id)arg1 mode:(int)arg2 withSelectedOptions:(id)arg3;
+ (id)newFaceViewOfStyle:(int)arg1;
+ (int)numberOfDetailModesForFaceStyle:(int)arg1;
+ (id)swatchForEditModeDependsOnOptions:(int)arg1;
+ (id)swatchImageForEditOption:(id)arg1 mode:(int)arg2 withSelectedOptions:(id)arg3;

- (void).cxx_destruct;
- (void)_adjustUIForBoundsChange;
- (float)_alphaForComplicationSlot:(id)arg1 inEditMode:(int)arg2;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (void)_applySlow;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (id)_baseTimeTravelCaptionImageNameForEnglishOnly;
- (id)_blurSourceImage;
- (void)_bringForegroundViewsToFront;
- (BOOL)_canStartTimeScrubbing;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterOptionTransitionForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_cleanupAfterOrb:(BOOL)arg1;
- (void)_cleanupAfterZoom;
- (id)_complicationContainerView;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (id)_createTimeTravelCaptionImage;
- (void)_didEnterBackground;
- (void)_disableCrown;
- (float)_editSpeedForComplications;
- (float)_editSpeedForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_enableCrown;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForComplicationDisplayWrapper:(id)arg1 inSlot:(id)arg2;
- (void)_getKeylineFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 padding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2 forComplicationSlot:(id)arg3 selected:(BOOL)arg4;
- (void)_handleLocaleDidChange;
- (void)_handleOrdinaryScreenWake;
- (BOOL)_handlePhysicalButton:(unsigned int)arg1 event:(unsigned int)arg2;
- (void)_handleWristRaiseScreenWake;
- (float)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(int)arg1 slot:(id)arg2;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_layoutComplicationViewForSlot:(id)arg1;
- (void)_layoutComplicationViewWithWrapper:(id)arg1 forSlot:(id)arg2;
- (void)_layoutComplicationViews;
- (void)_layoutForegroundContainerView;
- (id)_layoutRuleForComplicationSlot:(id)arg1 withOverride:(int)arg2 inEditMode:(int)arg3;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (int)_legacyLayoutOverrideforComplicationType:(unsigned int)arg1 slot:(id)arg2;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (struct CGSize { float x1; float x2; })_maxSizeForComplicationSlot:(id)arg1 layoutOverride:(int)arg2;
- (float)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)_performSuppressingLayoutOnGeometryChange:(id /* block */)arg1;
- (void)_performWristRaiseAnimation;
- (void)_prepareForEditing;
- (void)_prepareForOrb;
- (void)_prepareForStatusChange:(BOOL)arg1;
- (void)_prepareScrubbingSequencerBoundaries;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1;
- (void)_resetSequencerBoundaries;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (void)_setTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)_setupTimeTravel;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)_supportsTimeScrubbing;
- (BOOL)_supportsUnadornedSnapshot;
- (id)_timeTravelCaptionAttributedText;
- (id)_timeTravelCaptionCacheKey;
- (id)_timeTravelCaptionFontSizeOverrides;
- (float)_timeTravelCaptionLabelMaxWidth;
- (float)_timeTravelStatusModuleCaptionConstraintPadding;
- (struct CGPoint { float x1; float x2; })_timeTravelStatusModuleCenter;
- (void)_unloadSnapshotContentViews;
- (void)_updateComplicationMaxSize;
- (void)_updateForResourceDirectoryChange;
- (void)_updateMaxSizeForDisplayWrapper:(id)arg1 slot:(id)arg2;
- (void)_updateStatusIconVisibility;
- (void)_updateTimeOffset;
- (BOOL)_usesCustomZoom;
- (float)_verticalPaddingForStatusBar;
- (id)_viewsToSuppressLayoutOnBoundsChange;
- (BOOL)_wantsOpportunisticLiveFaceLoading;
- (BOOL)_wantsStatusBarHidden;
- (BOOL)_wantsTimeTravelStatusModule;
- (BOOL)_wheelChangedWithEvent:(id)arg1;
- (void)_willEnterForeground;
- (float)alphaForDimmedState;
- (void)applyBreathingFraction:(float)arg1 forComplicationSlot:(id)arg2;
- (void)applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)applyRubberBandingFraction:(float)arg1 forComplicationSlot:(id)arg2;
- (void)applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (id)blurSourceImage;
- (void)cleanupAfterEditing;
- (void)cleanupAfterOptionTransitionForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)cleanupAfterOrb:(BOOL)arg1;
- (void)cleanupAfterZoom;
- (BOOL)complicationIsHiddenAtSlot:(id)arg1;
- (id)complicationLayoutforSlot:(id)arg1;
- (id)complicationPickerViewForSlot:(id)arg1;
- (BOOL)complicationsShowEditingContent;
- (void)configureComplicationViewDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (void)configureForEditMode:(int)arg1;
- (void)configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (id)currentDisplayDate;
- (id)customEditingViewController;
- (int)dataMode;
- (void)dealloc;
- (id)delegate;
- (int)detailMode;
- (float)editModeTransitionFraction;
- (float)editSpeedForComplications;
- (float)editSpeedForCustomEditMode:(int)arg1 slot:(id)arg2;
- (id)editView;
- (BOOL)editing;
- (void)endScrubbingAnimated:(BOOL)arg1;
- (void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)enumerateComplicationDisplayWrappersWithBlock:(id /* block */)arg1;
- (int)faceStyle;
- (id)foregroundContainerView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForComplicationPickerViewForSlot:(id)arg1;
- (int)fromEditMode;
- (void)handleOrdinaryScreenWake;
- (void)handleUnadornedSnapshotRemoved;
- (void)handleWristRaiseScreenWake;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateComplicationLayout;
- (BOOL)isFrozen;
- (BOOL)isSlow;
- (float)keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keylineFrameForComplicationSlot:(id)arg1 selected:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keylineFrameForCustomEditMode:(int)arg1 slot:(id)arg2;
- (unsigned int)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned int)keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (BOOL)keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (id)keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)layoutComplicationViews;
- (void)layoutContainerView:(id)arg1;
- (id)layoutRuleForComplicationSlot:(id)arg1 inState:(int)arg2 layoutOverride:(int)arg3;
- (void)layoutSubviews;
- (int)legacyComplicationLayoutOverrideForSlot:(id)arg1 complication:(id)arg2;
- (void)loadContentToReplaceUnadornedSnapshot;
- (float)maxIconDiameter;
- (float)minIconDiameter;
- (BOOL)needsImageQueueDiscardOnRender;
- (id)newLegacyComplicationViewForSlot:(id)arg1 family:(int)arg2 complication:(id)arg3;
- (id)normalComplicationDisplayWrapperForSlot:(id)arg1;
- (id)optionForCustomEditMode:(int)arg1 slot:(id)arg2;
- (BOOL)orbing;
- (void)performTimeTravelModuleTapAction;
- (void)performWristRaiseAnimation;
- (void)prepareForEditing;
- (void)prepareForOrb;
- (void)prepareForStatusChange:(BOOL)arg1;
- (void)prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (void)reloadSnapshotContentViews;
- (void)renderIfNeeded;
- (id)resourceDirectory;
- (void)scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (id)selectedComplicationSlot;
- (void)setComplicationHidden:(BOOL)arg1 atSlot:(id)arg2;
- (void)setComplicationPickerView:(id)arg1 forSlot:(id)arg2;
- (void)setComplicationsShowEditingContent:(BOOL)arg1;
- (void)setDataMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailMode:(int)arg1;
- (void)setEditView:(id)arg1;
- (void)setFaceStyle:(int)arg1;
- (void)setFrozen:(BOOL)arg1;
- (void)setNeedsRender;
- (void)setNextRenderIsFirstAfterWake;
- (void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (void)setOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setResourceDirectory:(id)arg1;
- (void)setSelectedComplicationSlot:(id)arg1;
- (void)setShouldShowUnsnapshotableContent:(BOOL)arg1;
- (void)setShowContentForUnadornedSnapshot:(BOOL)arg1;
- (void)setShowsCanonicalContent:(BOOL)arg1;
- (void)setShowsLockedUI:(BOOL)arg1;
- (void)setSlow:(BOOL)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimeView:(id)arg1;
- (void)setTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(int)arg4 slot:(id)arg5;
- (void)setUnadornedSnapshotView:(id)arg1;
- (void)setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (BOOL)shouldShowUnsnapshotableContent;
- (BOOL)showContentForUnadornedSnapshot;
- (BOOL)showsCanonicalContent;
- (BOOL)showsLockedUI;
- (void)startScrubbingAnimated:(BOOL)arg1;
- (void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)supportsUnadornedSnapshot;
- (BOOL)timeScrubbing;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })timeTravelModuleTouchInsets;
- (id)timeView;
- (int)toEditMode;
- (id)unadornedSnapshotView;
- (BOOL)usesCustomZoom;
- (float)verticalPaddingForStatusBar;
- (BOOL)wantsStatusBarHidden;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)zooming;
- (id)zoomingIconView;

@end
