/* Generated by RuntimeBrowser.
 */

@protocol NUIContainerStackViewDelegate <NSObject>

@optional

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })containerStackView:(NUIContainerStackView *)arg1 layoutFrameForArrangedSubview:(UIView *)arg2 withProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })containerStackView:(NUIContainerStackView *)arg1 minimumSpacingAdjecentToArrangedSubview:(UIView *)arg2;
- (struct CGSize { float x1; float x2; })containerStackView:(NUIContainerStackView *)arg1 systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg2 forArrangedSubview:(UIView *)arg3;
- (void)containerStackViewDidInvalidateIntrinsicContentSize:(NUIContainerStackView *)arg1;
- (void)containerStackViewDidLayoutArrangedSubviews:(NUIContainerStackView *)arg1;

@end
