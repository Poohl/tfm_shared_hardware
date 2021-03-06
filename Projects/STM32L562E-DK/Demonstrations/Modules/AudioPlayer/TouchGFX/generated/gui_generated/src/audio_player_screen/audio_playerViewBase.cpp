/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/audio_player_screen/audio_playerViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

audio_playerViewBase::audio_playerViewBase() :
    buttonCallback(this, &audio_playerViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &audio_playerViewBase::flexButtonCallbackHandler),
    sliderValueChangedCallback(this, &audio_playerViewBase::sliderValueChangedCallbackHandler),
    sliderValueConfirmedCallback(this, &audio_playerViewBase::sliderValueConfirmedCallbackHandler),
    trackSelectorBoxTrackPlayPausedPressedCallback(this, &audio_playerViewBase::trackSelectorBoxTrackPlayPausedPressedCallbackHandler),
    trackSelectorBoxShuffelPressedCallback(this, &audio_playerViewBase::trackSelectorBoxShuffelPressedCallbackHandler),
    trackSelectorBoxRepeatPressedCallback(this, &audio_playerViewBase::trackSelectorBoxRepeatPressedCallbackHandler)
{
    backgroundBox.setPosition(0, 0, 240, 240);
    backgroundBox.setColor(touchgfx::Color::getColorFrom24BitRGB(47, 45, 64));

    noMediaFilesText.setXY(8, 34);
    noMediaFilesText.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    noMediaFilesText.setLinespacing(0);
    noMediaFilesText.setTypedText(touchgfx::TypedText(T_SINGLEUSEID18));

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_AUDIO_BACKGROUND_ID));

    onLed.setXY(88, 126);
    onLed.setVisible(false);
    onLed.setBitmap(touchgfx::Bitmap(BITMAP_LED_ON_ID));

    bottomBar.setPosition(0, 176, 240, 64);

    bottombar.setXY(0, 0);
    bottombar.setBitmap(touchgfx::Bitmap(BITMAP_BOTTOM_BAR_ID));
    bottomBar.add(bottombar);

    musicDurationSlider.setXY(34, 43);
    musicDurationSlider.setBitmaps(touchgfx::Bitmap(BITMAP_AUDIO_SLIDER_BAR_ID), touchgfx::Bitmap(BITMAP_AUDIO_SLIDER_FILL_PLAYING_ID), touchgfx::Bitmap(BITMAP_AUDIO_SLIDER_KNOB_ID));
    musicDurationSlider.setupHorizontalSlider(5, 5, 0, 0, 126);
    musicDurationSlider.setValueRange(0, 100);
    musicDurationSlider.setValue(0);
    musicDurationSlider.setStopValueCallback(sliderValueConfirmedCallback);
    bottomBar.add(musicDurationSlider);

    volumeButton.setXY(184, 32);
    volumeButton.setBitmaps(touchgfx::Bitmap(BITMAP_ICON_VOLUME_LOW_ID), touchgfx::Bitmap(BITMAP_ICON_VOLUME_LOW_PRESSED_ID));
    volumeButton.setAction(buttonCallback);
    bottomBar.add(volumeButton);

    powerSaveButton.setIconBitmaps(Bitmap(BITMAP_ICON_LOW_POWER_ID), Bitmap(BITMAP_ICON_LOW_POWER_PRESSED_ID));
    powerSaveButton.setIconXY(5, 19);
    powerSaveButton.setPosition(0, 25, 54, 40);
    powerSaveButton.setVisible(false);
    powerSaveButton.setAction(flexButtonCallback);
    bottomBar.add(powerSaveButton);

    playPauseButton.setXY(90, -3);
    playPauseButton.setBitmaps(touchgfx::Bitmap(BITMAP_ICON_PLAY_ID), touchgfx::Bitmap(BITMAP_ICON_PAUSE_ID));
    playPauseButton.setAction(buttonCallback);
    bottomBar.add(playPauseButton);

    nextSongButton.setXY(155, 4);
    nextSongButton.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_NEXT_TRACK_OVERLAY_ID), touchgfx::Bitmap(BITMAP_BUTTON_NEXT_TRACK_PRESSED_ID));
    nextSongButton.setAction(buttonCallback);
    bottomBar.add(nextSongButton);

    previousSongButton.setXY(24, 4);
    previousSongButton.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_PREV_TRACK_OVERLAY_ID), touchgfx::Bitmap(BITMAP_BUTTON_PREV_TRACK_PRESSED_ID));
    previousSongButton.setAction(buttonCallback);
    bottomBar.add(previousSongButton);

    durationLeft.setPosition(5, 39, 30, 20);
    durationLeft.setColor(touchgfx::Color::getColorFrom24BitRGB(180, 176, 205));
    durationLeft.setLinespacing(0);
    Unicode::snprintf(durationLeftBuffer, DURATIONLEFT_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID2).getText());
    durationLeft.setWildcard(durationLeftBuffer);
    durationLeft.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));
    bottomBar.add(durationLeft);

    durationTotal.setPosition(176, 39, 30, 20);
    durationTotal.setColor(touchgfx::Color::getColorFrom24BitRGB(180, 176, 205));
    durationTotal.setLinespacing(0);
    Unicode::snprintf(durationTotalBuffer, DURATIONTOTAL_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID4).getText());
    durationTotal.setWildcard(durationTotalBuffer);
    durationTotal.setTypedText(touchgfx::TypedText(T_SINGLEUSEID3));
    bottomBar.add(durationTotal);

    volumeBarContainer.setPosition(240, 40, 32, 142);

    volumenSliderBG.setXY(0, 0);
    volumenSliderBG.setBitmap(touchgfx::Bitmap(BITMAP_VOLUME_BAR_ID));
    volumeBarContainer.add(volumenSliderBG);

    volumeSlider.setXY(5, 7);
    volumeSlider.setBitmaps(touchgfx::Bitmap(BITMAP_VOLUME_BAR_EMPTY_BG_ID), touchgfx::Bitmap(BITMAP_VOLUME_BAR_FILL_ID), touchgfx::Bitmap(BITMAP_VOLUME_HANDLE_ID));
    volumeSlider.setupVerticalSlider(5, 6, 0, 0, 127);
    volumeSlider.setValueRange(0, 100);
    volumeSlider.setValue(0);
    volumeSlider.setNewValueCallback(sliderValueChangedCallback);
    volumeBarContainer.add(volumeSlider);

    playPauseAnimation.setXY(28, 21);
    playPauseAnimation.setBitmaps(BITMAP_ANIMATION0000_ID, BITMAP_ANIMATION0014_ID);
    playPauseAnimation.setUpdateTicksInterval(3);

    trackSelectorBox.setXY(240, 0);
    trackSelectorBox.setTrackPlayPausedPressedCallback(trackSelectorBoxTrackPlayPausedPressedCallback);
    trackSelectorBox.setShuffelPressedCallback(trackSelectorBoxShuffelPressedCallback);
    trackSelectorBox.setRepeatPressedCallback(trackSelectorBoxRepeatPressedCallback);

    backButton.setXY(0, 0);
    backButton.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_BACK_ID), touchgfx::Bitmap(BITMAP_BUTTON_BACK_PRESSED_ID));
    backButton.setAction(buttonCallback);

    albumButton.setXY(184, 0);
    albumButton.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_ALBUM_ID), touchgfx::Bitmap(BITMAP_BUTTON_ALBUM_PRESSED_ID));
    albumButton.setAction(buttonCallback);

    cancelButton.setXY(184, 0);
    cancelButton.setVisible(false);
    cancelButton.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_CLOSE_ALBUM_ID), touchgfx::Bitmap(BITMAP_BUTTON_CLOSE_ALBUM_PRESSED_ID));
    cancelButton.setAction(buttonCallback);

    powerSaveContainer.setPosition(0, 0, 400, 240);
    powerSaveContainer.setVisible(false);

    powerSaveBackground.setPosition(0, 0, 240, 240);
    powerSaveBackground.setColor(touchgfx::Color::getColorFrom24BitRGB(47, 45, 64));
    powerSaveBackground.setAlpha(243);
    powerSaveContainer.add(powerSaveBackground);

    powersaveInconAndText.setXY(81, 50);
    powersaveInconAndText.setBitmap(touchgfx::Bitmap(BITMAP_POWER_SAVE_TITLE_AND_ICON_ID));
    powerSaveContainer.add(powersaveInconAndText);

    offText.setXY(293, 289);
    offText.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    offText.setLinespacing(0);
    offText.setTypedText(touchgfx::TypedText(T_SINGLEUSEID14));
    powerSaveContainer.add(offText);

    shuttingOfCounter.setPosition(345, 329, 110, 38);
    shuttingOfCounter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 198));
    shuttingOfCounter.setLinespacing(0);
    touchgfx::Unicode::snprintf(shuttingOfCounterBuffer1, SHUTTINGOFCOUNTERBUFFER1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID16).getText());
    shuttingOfCounter.setWildcard1(shuttingOfCounterBuffer1);
    touchgfx::Unicode::snprintf(shuttingOfCounterBuffer2, SHUTTINGOFCOUNTERBUFFER2_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID17).getText());
    shuttingOfCounter.setWildcard2(shuttingOfCounterBuffer2);
    shuttingOfCounter.setTypedText(touchgfx::TypedText(T_SINGLEUSEID15));
    powerSaveContainer.add(shuttingOfCounter);

    cancelPowerSave.setXY(300, 380);
    cancelPowerSave.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_CANCEL_ID), touchgfx::Bitmap(BITMAP_BUTTON_CANCEL_PRESSED_ID));
    cancelPowerSave.setAction(buttonCallback);
    powerSaveContainer.add(cancelPowerSave);

    offText_1.setXY(206, 231);
    offText_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    offText_1.setLinespacing(0);
    offText_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID19));
    powerSaveContainer.add(offText_1);

    add(backgroundBox);
    add(noMediaFilesText);
    add(background);
    add(onLed);
    add(bottomBar);
    add(volumeBarContainer);
    add(playPauseAnimation);
    add(trackSelectorBox);
    add(backButton);
    add(albumButton);
    add(cancelButton);
    add(powerSaveContainer);
}

void audio_playerViewBase::setupScreen()
{
    trackSelectorBox.initialize();
}

void audio_playerViewBase::trackSelectorBoxTrackPlayPausedPressedCallbackHandler(bool value)
{
    //trackListPlayPausePressed
    //When trackSelectorBox trackPlayPausedPressed call virtual function
    //Call trackListPlayPausePressed
    trackListPlayPausePressed(value);
}

void audio_playerViewBase::trackSelectorBoxShuffelPressedCallbackHandler(bool value)
{
    //shufflePressed
    //When trackSelectorBox shuffelPressed call virtual function
    //Call shufflePressed
    shufflePressed(value);
}

void audio_playerViewBase::trackSelectorBoxRepeatPressedCallbackHandler(bool value)
{
    //repeatPressed
    //When trackSelectorBox repeatPressed call virtual function
    //Call repeatPressed
    repeatPressed(value);
}

void audio_playerViewBase::volumeButtonPressed(bool value)
{

}

void audio_playerViewBase::volumeSliderChanged(uint16_t value)
{

}

void audio_playerViewBase::musicSliderChanged(uint16_t value)
{

}

void audio_playerViewBase::playPauseButtonPressed(bool value)
{

}

void audio_playerViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &volumeButton)
    {
        //volumeButtonPressed
        //When volumeButton clicked call volumeButtonPressed on audio_player
        //Call volumeButtonPressed
        volumeButtonPressed(volumeButton.getState());
    }
    else if (&src == &playPauseButton)
    {
        //playPauseButton
        //When playPauseButton clicked call playPauseButtonPressed on audio_player
        //Call playPauseButtonPressed
        playPauseButtonPressed(playPauseButton.getState());
    }
    else if (&src == &nextSongButton)
    {
        //nextSongPressed
        //When nextSongButton clicked call virtual function
        //Call nextSongPressed
        nextSongPressed();
    }
    else if (&src == &previousSongButton)
    {
        //previousSongPressed
        //When previousSongButton clicked call virtual function
        //Call previousSongPressed
        previousSongPressed();
    }
    else if (&src == &backButton)
    {
        //backButtonPressed
        //When backButton clicked call virtual function
        //Call backButtonPressed
        backButtonPressed();
    }
    else if (&src == &albumButton)
    {
        //albumButtonPressed1
        //When albumButton clicked call virtual function
        //Call albumButtonPressed
        albumButtonPressed();

        //albumButtonPressed2
        //When albumButton clicked show cancelButton
        //Show cancelButton
        cancelButton.setVisible(true);
        cancelButton.invalidate();
    }
    else if (&src == &cancelButton)
    {
        //cancelButtonPressed1
        //When cancelButton clicked move trackSelectorBox
        //Move trackSelectorBox to x:240, y:0 with CubicIn easing in 300 ms (18 Ticks)
        trackSelectorBox.clearMoveAnimationEndedAction();
        trackSelectorBox.startMoveAnimation(240, 0, 18, touchgfx::EasingEquations::cubicEaseIn, touchgfx::EasingEquations::cubicEaseIn);

        //cancelButtonPressed2
        //When cancelButton clicked hide cancelButton
        //Hide cancelButton
        cancelButton.setVisible(false);
        cancelButton.invalidate();
    }
    else if (&src == &cancelPowerSave)
    {
        //cancelPowerSave
        //When cancelPowerSave clicked call virtual function
        //Call cancalPowerSavePressed
        cancalPowerSavePressed();

        //cancelPowerSave2
        //When cancelPowerSave clicked hide powerSaveContainer
        //Hide powerSaveContainer
        powerSaveContainer.setVisible(false);
        powerSaveContainer.invalidate();
    }
}

void audio_playerViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &powerSaveButton)
    {
        //powerSavePressed
        //When powerSaveButton clicked call virtual function
        //Call powerSavePressed
        powerSavePressed();

        //powerSavePressed2
        //When powerSaveButton clicked show powerSaveContainer
        //Show powerSaveContainer
        powerSaveContainer.setVisible(true);
        powerSaveContainer.invalidate();
    }
}

void audio_playerViewBase::sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &volumeSlider)
    {
        //volumenSliderValueChanged
        //When volumeSlider value changed call volumeSliderChanged on audio_player
        //Call volumeSliderChanged
        volumeSliderChanged(value);
    }
}

void audio_playerViewBase::sliderValueConfirmedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &musicDurationSlider)
    {
        //musicDurationSliderChanged
        //When musicDurationSlider value confirmed call musicSliderChanged on audio_player
        //Call musicSliderChanged
        musicSliderChanged(value);
    }
}
