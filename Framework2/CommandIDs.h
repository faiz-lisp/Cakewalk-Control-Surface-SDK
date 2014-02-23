////////////////////////////////////////////////////////////////////////////////
// The following is a list of commands supported thru ISonarCommands.
//
// This list is subject to change according to the policy described:
//	As commands are added in SONAR, new ID's are added at the bottom
// of this list.
// When commands are deprecated in SONAR, the location in this list of ID's
// is preserved and marked as "RESERVED" so that other commands do not shift.
// Thus, invoking a particular command ID is not guaranteed to work in future
// releases.
////////////////////////////////////////////////////////////////////////////////

typedef enum SONAR_COMMAND_IDS
{
	CMD_FILE_NEW_TEMPLATE = 1,
	CMD_FILE_OPEN,
	CMD_FILE_SAVE,
	CMD_FILE_SAVE_AS,
	CMD_RESERVED1,
	CMD_RESERVED2,
	CMD_FILE_PRINT_PREVIEW,
	CMD_FILE_PRINT,
	CMD_FILE_PRINT_SETUP,
	CMD_APP_EXIT,
	CMD_APP_ABOUT,
	CMD_FILE_MRU_FILE1,
	CMD_FILE_MRU_FILE2,
	CMD_FILE_MRU_FILE3,
	CMD_FILE_MRU_FILE4,
	CMD_REALTIME_PLAY,
	CMD_REALTIME_RECORD,
	CMD_REALTIME_REW,
	CMD_REALTIME_STEP_RECORD,
	CMD_REALTIME_RECORD_MODE,
	CMD_REALTIME_REJECT_LOOP_TAKE,
	CMD_REALTIME_AUTO_SHUTTLE,
	CMD_RESERVED3,
	CMD_RESERVED4,
	CMD_RESERVED5,
	CMD_FROM_EQ_NOW,
	CMD_THRU_EQ_NOW,
	CMD_FROM_EQ_START,
	CMD_THRU_EQ_END,
	CMD_SELECT_ALL,
	CMD_SELECT_NONE,
	CMD_GOTO_TIME,
	CMD_GOTO_FROM,
	CMD_GOTO_THRU,
	CMD_GOTO_START,
	CMD_GOTO_END,
	CMD_GOTO_PREV_MEAS,
	CMD_GOTO_NEXT_MEAS,
	CMD_SEARCH,
	CMD_SEARCH_NEXT,
	CMD_EDIT_UNDO,
	CMD_EDIT_COPY,
	CMD_EDIT_CUT,
	CMD_EDIT_PASTE_SPECIAL,
	CMD_RESERVED6,
	CMD_EDIT_QUANTIZE,
	CMD_EDIT_INTERPOLATE,
	CMD_EDIT_LENGTH,
	CMD_EDIT_SLIDE,
	CMD_EDIT_RETROGRADE,
	CMD_EDIT_TRANSPOSE,
	CMD_EDIT_FIT_TO_TIME,
	CMD_EDIT_FIT_IMPROV,
	CMD_EDIT_RUN_CAL,
	CMD_INSERT_CONTROLLER_SERIES,
	CMD_TRACK_NAME,
	CMD_TRACK_MUTE,
	CMD_TRACK_ARCHIVE,
	CMD_RESERVED7,
	CMD_TRACK_TIME,
	CMD_TRACK_KEY,
	CMD_TRACK_VEL,
	CMD_TRACK_PORT,
	CMD_TRACK_CHAN,
	CMD_TRACK_PATCH,
	CMD_TRACK_VOL,
	CMD_TRACK_PAN,
	CMD_TRACK_CLONE,
	CMD_RESERVED8,
	CMD_TRACK_WIPE,
	CMD_TRACK_SORT,
	CMD_TRACK_SOLO,
	CMD_TRACK_UNSOLO,
	CMD_VIEW_NEW_EVENT_LIST,
	CMD_VIEW_NEW_PIANO_ROLL,
	CMD_VIEW_NEW_STAFF,
	CMD_RESERVED9,
	CMD_RESERVED10,
	CMD_RESERVED11,
	CMD_RESERVED12,
	CMD_RESERVED13,
	CMD_RESERVED14,
	CMD_RESERVED15,
	CMD_WINDOW_TILE_HORZ,
	CMD_WINDOW_TILE_VERT,
	CMD_WINDOW_CASCADE,
	CMD_RESERVED16,
	CMD_WINDOW_ARRANGE,
	CMD_OPTIONS,
	CMD_RESERVED17,
	CMD_RESERVED18,
	CMD_RESERVED19,
	CMD_RESERVED20,
	CMD_GLOBAL_OPTIONS,
	CMD_RESERVED21,
	CMD_RESERVED22,
	CMD_RESERVED23,
	CMD_MIDI_PORTS,
	CMD_RESERVED24,
	CMD_BINDINGS,
	CMD_INIFILES,
	CMD_COLORS,
	CMD_VIEW_TEMPO,
	CMD_VIEW_METER,
	CMD_VIEW_MARKERS,
	CMD_VIEW_CONSOLE,
	CMD_VIEW_PLAYLIST,
	CMD_VIEW_SYSX,
	CMD_VIEW_CAL,
	CMD_REALTIME_PATCH_CACHE,
	CMD_EDIT_SCALE_VELOCITY,
	CMD_RESERVED25,
	CMD_REALTIME_PANIC,
	CMD_RESERVED26,
	CMD_RESERVED27,
	CMD_RESERVED28,
	CMD_RESERVED29,
	CMD_INSERT_BANK_PATCH,
	CMD_INSERT_WAVE,
	CMD_INSERT_TEMPO,
	CMD_INSERT_METER,
	CMD_RESERVED30,
	CMD_INSERT_TEMPO_SERIES,
	CMD_EDIT_GROOVE_QUANTIZE,
	CMD_FILE_INFO,
	CMD_TRACK_BANK,
	CMD_VIEW_NEW_LYRICS,
	CMD_VIEW_BIG_TIME,
	CMD_RESERVED31,
	CMD_AUDIO_REVERSE,
	CMD_AUDIO_REMOVE_SILENCE,
	CMD_AUDIO_EXTRACT_TIMING,
	CMD_AUDIO_LOUDER,
	CMD_AUDIO_SOFTER,
	CMD_AUDIO_NORMALIZE,
	CMD_AUDIO_FADE,
	CMD_AUDIO_XFADE,
	CMD_AUDIO_GRAPHIC_EQ,
	CMD_AUDIO_PARAMETRIC_EQ,
	CMD_AUDIO_SPLIT,
	CMD_RESERVED32,
	CMD_SELECT_FILTER,
	CMD_SELECT_TIME,
	CMD_AUDIO_COMPACT,
	CMD_AUDIO_CLEAN,
	CMD_RESERVED33,
	CMD_VIEW_NEW_AUDIO,
	CMD_RESERVED34,
	CMD_AUDIO_OPTIONS,
	CMD_VIEW_LAYOUTS,
	CMD_INSERT_MARKER,
	CMD_EDIT_REDO,
	CMD_RESERVED35,
	CMD_VIEW_NEW_PANEL,
	CMD_REALTIME_TEMPO1,
	CMD_REALTIME_TEMPO2,
	CMD_REALTIME_TEMPO3,
	CMD_VIEW_EFFECTS,
	CMD_RESERVED36,
	CMD_RESERVED37,
	CMD_VIRTUAL_PIANO,
	CMD_SOUND_FONTS,
	CMD_FILE_SEND,
	CMD_EDIT_DELETE,
	CMD_CREATE_CLIPS,
	CMD_AUDIO_HARDWARE,
	CMD_AUDIO_PITCH_DETECT,
	CMD_MARKER_PREVIOUS,
	CMD_MARKER_NEXT,
	CMD_REALTIME_STOP,
	CMD_TRACK_SOURCES,
	CMD_TRACK_ARM,
	CMD_FILE_CLOSE,
	CMD_EDIT_HISTORY,
	CMD_INSERT_TIME,
	CMD_INSTRUMENTS,
	CMD_VIEW_TOOLBAR_STANDARD,
	CMD_VIEW_TOOLBAR_LOOP,
	CMD_VIEW_TOOLBAR_MARKERS,
	CMD_VIEW_TOOLBAR_POSITION,
	CMD_VIEW_TOOLBAR_RECORD,
	CMD_VIEW_TOOLBAR_SELECT,
	CMD_VIEW_TOOLBAR_SYNC,
	CMD_VIEW_TOOLBAR_TEMPO,
	CMD_VIEW_TOOLBAR_TRANSPORT,
	CMD_VIEW_CONTROLBAR_TRANSPORT,
	CMD_VIEW_TOOLBAR_VIEWS,
	CMD_HELP_FINDER,
	CMD_HELP_README,
	CMD_HELP_QUICKSTART,
	CMD_TIP_OF_THE_DAY,
	CMD_HELP_WEB,
	CMD_VIEW_VIDEO,
	CMD_INSERT_VIDEO,
	CMD_VIDEO_EXPORT,
	CMD_AUDIO_MIXDOWN_BOUNCE,
	CMD_CHANGE_AUDIO_FORMAT,
	CMD_AUDIO_MIXDOWN_EXPORT,
	CMD_RESERVED38,
	CMD_RESERVED39,
	CMD_RESERVED40,
	CMD_RESERVED41,
	CMD_RESERVED42,
	CMD_RESERVED43,
	CMD_RESERVED44,
	CMD_RESERVED45,
	CMD_RESERVED46,
	CMD_RESERVED47,
	CMD_RESERVED48,
	CMD_RESERVED49,

	// TODO: maybe remove from this point forward
	CMD_TRACK_PROPERTIES,				
	CMD_RULER_MBT,							// options menu
	CMD_RULER_HMSF,							// options menu
	CMD_RULER_SAMPLE,						// options menu
	CMD_SET_LOOP_FROM_SELECTION,	
	CMD_SELECT_LOOP_REGION,		
	CMD_LOOP_TOGGLE,					
	CMD_SET_PUNCH_FROM_SELECTION,
	CMD_SELECT_PUNCH_REGION,		
	CMD_SET_SNAPPING,				
	CMD_CLIPS_VIEW_OPTIONS,		
	CMD_DRAG_OPTIONS,				
	CMD_CLIP_PROPERTIES,
	CMD_CREATE_VOLUME_ENVELOPE,
	CMD_CREATE_PAN_ENVELOPE,
	CMD_SHOW_ALL_ENVELOPES,
	CMD_HIDE_ALL_ENVELOPES,
	CMD_SHOW_ALL_VOLUME_ENVELOPES,
	CMD_SHOW_ALL_PAN_ENVELOPES,
	CMD_SHOW_ALL_PLUGIN_ENVELOPES,
	CMD_SHOW_ALL_AUTOMATED_MUTE_ENVELOPES,
	CMD_SHOW_ALL_MIDI_ENVELOPES,
	CMD_BOUNCE_TO_CLIPS,					// Edit Menu
	CMD_INSERT_AUDIO_TRACK,			   // Insert menu
	CMD_INSERT_MIDI_TRACK,				// Insert Menu
	CMD_APPLY_AUDIO_FX,					// Edit menu
	CMD_APPLY_MIDI_FX,// Edit menu
	CMD_SPLIT_CLIPS,						// Edit menu
	CMD_EDIT_APPLY_TRIMMING,				// Edit menu
	CMD_SELECT_TRACK_ENVELOPES_WITH_CLIPS, // Edit menu
	CMD_VIEW_NEW_LOOP_CONSTR,			// VIEW MENU
	CMD_VIEW_NEW_EXPLORER,				// VIEW MENU
	CMD_VIEW_PEAVEY,						// VIEW MENU
	CMD_VIEW_TOOLBARS,						// VIEW MENU
	CMD_REALTIME_RECORD_AUTOMATION,	// Transport menu
	CMD_RESERVED50,
	CMD_TRACK_ARM_AUTOMATION,			// Track menu
	CMD_DELETE_TRACK,						// Track menu
	CMD_TRACK_HIDE,							// Track menu
	CMD_RECORD_VU,							// Track menu
	CMD_PLAYBACK_VU,						// Help menu
	CMD_KEYBOARD_SHORTCUTS,				// Help menu
	CMD_SONAR_UPD_URL,						// Help menu
	CMD_SONAR_FAQ_URL,						// Help menu
	CMD_SONAR_SUPPORT_URL,				// Help menu
	CMD_SONAR_NEWSGROUPS_URL,			// Help menu
	CMD_SONAR_URL,							// Help menu
	CMD_UNLINK_CLIPS,
	CMD_SELECT_SIBLINGS,
	CMD_CLIPS_TOGGLE_LOOPING,			// Edit Menu
	CMD_SMARTCLIP_INC_PITCH,
	CMD_SMARTCLIP_DEC_PITCH,
	CMD_REALTIME_AUDIO_RUNNING,		// Transport Menu
	CMD_SHOW_HIDE_TRACKS,
	CMD_AUTO_CROSSFADE,
	CMD_SET_SNAP_OFFSET_TO_NOW_TIME,
	CMD_AUTOMATION_STATIC_MODE,
	CMD_RESERVED51,
	CMD_RESERVED52,
	CMD_RESERVED53,
	CMD_PROJECT_FILES,					// File Menu
	CMD_DRUMMAP_MGR,						// Drum Map Magager
	CMD_SHOW_ALL_AUX_SEND_ENVELOPES,
	CMD_VIEW_SYNTH_RACK,
	CMD_METRONOME_PLAYBACK,				// Metronome toolbar
	CMD_METRONOME_RECORD,

	CMD_REALTIME_SYNC_INTERNAL,		// Sync toolbar
	CMD_REALTIME_SYNC_MIDI,
	CMD_REALTIME_SYNC_SMPTE,
	CMD_REALTIME_SYNC_AUDIO,
	CMD_REALTIME_SYNC_TX_MMC,

	CMD_PLAY_IN_MONO,						// Playback state toolbar

	CMD_AUTOMATION_SNAPSHOT,			// Automation toolbar
	CMD_AUTOMATION_UNARM_ALL,
	CMD_AUTOMATION_LIVE_MODE,

	// SONAR 2.1
	CMD_EDIT_ENABLE_MIDI_CROPPING,	// Options menu
	CMD_EXPORT_OMF,						// File | Export

	// SONAR 3
	CMD_TRACK_INPUT_MONITOR,
	CMD_REALTIME_SYNC_TX_MIDI,			// Sync Toolbar
	CMD_REALTIME_SYNC_TX_MTC,			// Sync Toolbar

	// SONAR 3 - 8.5: Added 01/11/2010
	// SONAR 3
	CMD_FILE_IMPORT_MIDI,					// File Sub Menu
	CMD_FILE_EXPORT_MGC,
	CMD_REALTIME_NT_PLAY,					// Accelerator only

	// SONAR 3.0.1 Patch (add remaining toolbars)
	CMD_VIEW_TOOLBAR_METRONOME,
	CMD_VIEW_TOOLBAR_PLAYBACK_STATE,
	CMD_VIEW_TOOLBAR_AUTOMATION,
	CMD_VIEW_TOOLBAR_CONTROLSURFACE,
	CMD_VIEW_TOOLBAR_NOTE_INSPECTOR,

	// SONAR 4.0
	CMD_MUTE_CLIP,
	CMD_REALTIME_AUDITION,
	CMD_UNMUTE_CLIP,
	CMD_FREEZE_TRACK,						// Track | Freeze sub menu // 302
	CMD_THAW_TRACK,							// Track | Freeze sub menu
	CMD_UNFREEZE_TRACK,					// Track | Freeze sub menu
	CMD_FREEZE_SYNTH,						// Track | Freeze sub menu
	CMD_THAW_SYNTH,							// Track | Freeze sub menu
	CMD_UNFREEZE_SYNTH,					// Track | Freeze sub menu
	CMD_VIEW_DEFENDER,						// View | Navigator
	CMD_VIEW_POPUP_PANNER,				// View | Surround Panner // 309
	CMD_TRACK_SHOW_LAYERS,
	CMD_CHOOSE_CLIP,

// Begin of SONAR 4, View Context Commands
	// Surround Panner
	CMD_TAB_PREV,				
	CMD_TAB_NEXT,				
	CMD_PREV_PANNER,			
	CMD_NEXT_PANNER,			
	CMD_PREV_SEQ_PANNER,	
	CMD_NEXT_SEQ_PANNER,	
	CMD_SPEAKER_SELECT0,		
	CMD_SPEAKER_SELECT1,		
	CMD_SPEAKER_SELECT2,		
	CMD_SPEAKER_SELECT3,		
	CMD_SPEAKER_SELECT4,		
	CMD_SPEAKER_SELECT5,		
	CMD_SPEAKER_SELECT6,		
	CMD_SPEAKER_SELECT7,		
	CMD_SPEAKER_SELECT8,		
	CMD_SPEAKER_SELECT9,		
	CMD_SPEAKER_SELECT10,		
	CMD_SPEAKER_SELECT11,		
	CMD_SPEAKER_MUTE0,	
	CMD_SPEAKER_MUTE1,	
	CMD_SPEAKER_MUTE2,	
	CMD_SPEAKER_MUTE3,	
	CMD_SPEAKER_MUTE4,	
	CMD_SPEAKER_MUTE5,	
	CMD_SPEAKER_MUTE6,	
	CMD_SPEAKER_MUTE7,	
	CMD_SPEAKER_MUTE8,	
	CMD_SPEAKER_MUTE9,	
	CMD_SPEAKER_MUTE10,
	CMD_SPEAKER_MUTE11,
	
	// Markers View
	CMD_MARKER_INSERT,		
	CMD_MARKER_DELETE,		
	CMD_MARKER_PROPERTIES,	
	CMD_MARKER_LOCKED,		

	// Loop Explorer View
	CMD_PLAY,  		
	CMD_STOP,  		
	CMD_VIEW_TOGGLE, 
	CMD_AUTOPLAY,  	
	CMD_UP,		    	
	CMD_REFRESH, 		
	CMD_WIN_EXPLORER,
	
	CMD_SC_CLOSE,						// GLOBAL View Context

	// Meter/Key View
	CMD_METER_INSERT,	
	CMD_METER_DELETE,	
	CMD_METER_PROPERTIES,

	// Sysx View
	CMD_SYSX_SEND,		
	CMD_SYSX_SEND_ALL,  
	CMD_SYSX_RECEIVE, 	
	CMD_SYSX_CLEAR,  	
	CMD_SYSX_NAME,		
	CMD_SYSX_AUTO_SEND, 
	CMD_SYSX_PORT, 		
	CMD_SYSX_OPEN, 		
	CMD_SYSX_SAVE, 		

	// TEMPO View (and tools)
	CMD_TOOL_SELECT,  				
	CMD_TOOL_PENCIL,  				
	CMD_TOOL_LINE, 					
	CMD_TOOL_ERASE,  				
	CMD_TOOL_SNAP_TO_TIME,
	CMD_TOOL_SNAP_OPTS,
	
	CMD_TEMPO_TOGGLE_LIST_VIEW,	
	CMD_TEMPO_INSERT, 				
	CMD_TEMPO_DELETE, 				
	CMD_TEMPO_PROPERTIES,	
	
	CMD_TOOL_ZOOM_OUT_VERT,				
	CMD_TOOL_ZOOM_IN_VERT, 				
	CMD_TOOL_ZOOM_OUT_HORZ,				
	CMD_TOOL_ZOOM_IN_HORZ,
	
	CMD_SC_ENABLEFLOATING, 
	CMD_SC_DISABLEFLOATING,

	// Synth Rack
	CMD_INSERT_SOFTSYNTH,  		  
	CMD_INSERT_SOFTSYNTH_OPTIONS,  
	CMD_DELETE_SOFTSYNTH,  		  
	CMD_SOFTSYNTH_PROPERTIES,      
	CMD_NEXT_DXI,                  
	CMD_PREV_DXI,                  
	CMD_MUTE_DXI,                  
	CMD_SOLO_DXI,                  
	CMD_TOGGLE_CONNECT,            
	CMD_INCR_PRESET_DXI,           
	CMD_DECR_PRESET_DXI,           
	CMD_INCR_PRESET10_DXI,         
	CMD_DECR_PRESET10_DXI,
	
	// EventList View
	CMD_EVENTLIST_PATCH,     
	CMD_EVENTLIST_WHEEL,     
	CMD_EVENTLIST_CONTROLLER,
	CMD_EVENTLIST_SHOWCROP,  
	CMD_EVENTLIST_EXPRESSION,
	CMD_EVENTLIST_CHANAFT,   
	CMD_EVENTLIST_SHAPE,     
	CMD_EVENTLIST_HAIRPIN,   
	CMD_EVENTLIST_KEYAFT,    
	CMD_EVENTLIST_LYRIC,     
	CMD_EVENTLIST_MCI,       
	CMD_EVENTLIST_NOTE,      
	CMD_EVENTLIST_CHORD,     
	CMD_EVENTLIST_NRPN,      
	CMD_EVENTLIST_SYSX_BANK, 
	CMD_EVENTLIST_PICKTRACK, 
	CMD_EVENTLIST_WAVEDATA,  
	CMD_EVENTLIST_MANAGER,   
	CMD_EVENTLIST_DELETE,    
	CMD_EVENTLIST_INSERT,    
	CMD_EVENTLIST_TEXT,      
	CMD_EVENTLIST_SYSX_DATA, 
	CMD_EVENTLIST_RPN,       

	// Piano Roll View
	CMD_STAFF_DOTTED,        		
	CMD_STAFF_WHOLE,         		
	CMD_STAFF_HALF,          		
	CMD_STAFF_THIRTY_SECOND, 		
	CMD_STAFF_QUARTER,       		
	CMD_STAFF_SIXTEENTH,     		
	CMD_STAFF_EIGHTH,        		
	CMD_TRACKS_ALL,          		
	CMD_TOOL_SCRUB,          		
	CMD_CONTROLLER_PANE,     		
	CMD_TRACK_LIST_PANE,     		
	CMD_SHOW_GRID,           		
	CMD_TRACKS_NONE,         		
	CMD_SHOW_DURATIONS,      		
	CMD_STAFF_TRIPLET,       		
	CMD_TOOL_PATTERN_BRUSH,  		
	CMD_TOOL_PICK_TRACKS,    		
	CMD_TRACKS_INVERT,       		
	CMD_TOOL_ZOOM_IN_V_PRVDGV,	
	CMD_TOOL_ZOOM_OUT_V_PRVDGV,	
	CMD_SHOW_VELOCITY_TAILS,
 	
	// Console View
	CMD_NEXT_STRIP,					
	CMD_PREV_STRIP,					
	CMD_MIXER_MOD_FX, 				
	CMD_MIXER_MOD_EQ, 				
	CMD_MIXER_MOD_INPUT, 			
	CMD_MIXER_MOD_MSR, 				
	CMD_MIXER_MOD_OUTPUT,			
	CMD_MIXER_MOD_PAN, 				
	CMD_MIXER_MOD_PLOT,				
	CMD_MIXER_MOD_SEND,				
	CMD_MIXER_MOD_VOL, 				
	CMD_METER_OPTIONS, 				
	CMD_TOGGLE_WIDTH, 				
	CMD_TOGGLE_METERS,				

	// Loop Construction
	CMD_LOOP_SAVE,					
	CMD_TOOL_LOOPING, 				
	CMD_TOOL_STRETCHING, 			
	CMD_TOOL_FOLLOW_PITCH, 		
	CMD_TOOL_PREVIEW, 				
	CMD_TOOL_PREVIEW_STOP, 		
	CMD_TOOL_DEL_MARKER, 			
	CMD_TOOL_DFLT_MARKER, 			
	CMD_TOOL_AUTO_PREVIEW, 		
	CMD_TOOL_AUTO_PREVIEW_LOOP, 	
	CMD_TOOL_PREV_MARKER, 			
	CMD_TOOL_NEXT_MARKER, 			
	CMD_TOOL_SHOW_GAINS, 			
	CMD_TOOL_SHOW_PANS, 			
	CMD_TOOL_SHOW_PITCHES, 		
	CMD_LCV_CLIP_PROPS,
	
	// Staff View
	CMD_STAFF_LYRIC,					
	CMD_STAFF_CHORD,					
	CMD_STAFF_DYNAMIC,				
	CMD_STAFF_HAIRPIN,				
	CMD_STAFF_PEDAL,					
	CMD_STAFF_FILL,					
	CMD_STAFF_TRIM,					
	CMD_STAFF_LAYOUT,				
	CMD_STEP_PLAY_BACKWARDS,		
	CMD_STEP_PLAY_FORWARDS,		
	CMD_STEP_TIME_BACKWARDS,		
	CMD_STEP_TIME_FORWARDS,		
	CMD_TOOL_ZOOM_OUT,				
	CMD_TOOL_ZOOM_IN,				
	CMD_FRETBOARD_EXPORTASCIITAB,
	CMD_FRETVIEW_VISIBLE,
	
	// TrackView
	CMD_TOOL_SCISSORS,       		
	CMD_TRACK_SOLO2,					
	CMD_CHOOSE_CLIP2,					
	CMD_SHOWALLTRACKS,				
	CMD_SHOW_MAINS,          		
	CMD_SHOW_HIDE_DEFENDER,  		
	CMD_ENVELOPE_TOOL,       		
	CMD_SHOW_ALL,            		
	CMD_FIT_TRACKS,          		
	CMD_FIT_PROJECT,         		// 494
	CMD_ZOOM_CENTER_NOW,     		
	CMD_SHOWSELECTED,        		
	CMD_TRACK_HIDE2,          		
	CMD_TOGGLE_INSPECTOR,    		

	CMD_MUTE_TOOL,           		
	CMD_RESERVED54,								// Dup: CMD_SHOW_HIDE_TRACKS,    		// 500
	CMD_SNAP_TIME,           		
	CMD_RESERVED55,										// Dupe: CMD_AUTOMATION_STATIC_MODE,	
	CMD_SHOW_PAN_ENV,        		
	CMD_RESERVED56,								// Dup: CMD_MUTE_CLIP,    			           		
	CMD_SPLIT_CLIPS_NOW,     		
	CMD_SHOW_AND_FIT_SEL,    		
	CMD_SHOWSELECTED2,        		
	CMD_ZOOM_UNDO,           		
	CMD_ZOOM_REDO,           		
	CMD_SHOW_VOLUME_ENV,     		// 510
	CMD_ZOOM_IN_ALL_V,       		
	CMD_SCALE_DOWN_ALL,      		
	CMD_SCALE_DOWN_CUR,      		
	CMD_ZOOM_IN_CUR_V,       		
	CMD_ZOOM_OUT_CUR_V,         	
	CMD_ZOOM_OUT_ALL_V,      		
	CMD_SCALE_UP_ALL,        		
	CMD_SCALE_UP_CUR,        		
	CMD_CLIP_PROPERTIES2,     		
	CMD_AUTO_CROSSFADE2,				// 520
	CMD_RESERVED57,					        // Dup: CMD_TRACK_SHOW_LAYERS
	CMD_INSERT_FOLDER_TRACK, 
	CMD_FOLDER_PROPERTIES,

	// Video View
	CMD_ADVANCE_FRAME,		
	CMD_ADVANCE_DELTA_FRAME,
	CMD_REVERSE_FRAME,		
	CMD_REVERSE_DELTA_FRAME,
	CMD_VIDEO_ANIMATE,					
	CMD_VIDEO_CLIP_PROPERTIES, 		
	CMD_VIDEO_DELETE_CLIP,				// 530
	CMD_VIDEO_EXTERNAL_MONITOR,		
	CMD_VIDEO_INSERT_CLIP,				
	CMD_VIDEO_INTEGRAL_STRETCH,		
	CMD_VIDEO_ORIGINAL_SIZE,			
	CMD_VIDEO_PRESERVE_ASPECT, 		
	CMD_VIDEO_STRETCH_TO_WINDOW, 	
	CMD_VIDEO_TIME_DISPLAY_FONT, 	
	CMD_VIDEO_TIME_DISPLAY_FRAMES,	
	CMD_VIDEO_TIME_DISPLAY_MBT, 		
	CMD_VIDEO_TIME_DISPLAY_NONE,		// 540
	CMD_VIDEO_TIME_DISPLAY_SMPTE, 	
	CMD_VIDEO_BACKGROUNDCOLOR_BLACK, 
	CMD_VIDEO_BACKGROUNDCOLOR_WHITE, 

	// Other new commands (S4)
	CMD_AUTOPUNCH_MODE,
	CMD_SHOW_HIDE_VIDEO_ROW,				// in track view
   CMD_EDIT_NUDGELEFT,     // 546
   CMD_EDIT_NUDGEDOWN,     
   CMD_EDIT_NUDGERIGHT,    
   CMD_EDIT_NUDGELEFT2,    
   CMD_NUDGE_SETTINGS,     // 550
   CMD_EDIT_NUDGERIGHT2,   
   CMD_EDIT_NUDGELEFT3,    
   CMD_EDIT_NUDGEUP,       
   CMD_EDIT_NUDGERIGHT3,
   
	CMD_EDIT_CONVERT_MIDI_TO_SHAPES,	// Edit Menu | Main Menu
	CMD_VUMETERS,							// TV Props Header
	CMD_OPEN_CLOSE_SEL_FOLDER,			// TrackView Context
	CMD_APPEND_BUS, 						// Main Menu: Insert | Stereo Bus
	CMD_APPEND_SURROUND_BUS, 			// Main Menu: Insert | Surround Bus 
	CMD_SYSX_EDIT,							// 560 // Sysx View: Edit	
	CMD_OPTIONS_AUDIOMETERSETTINGS,	// Main menu | Options | Audio Meter Settings
	CMD_PROCESS_FADESELECTEDCLIPS,		// Main Menu | Process | Fade Selected Clips

	// SONAR 5
	CMD_TRACK_PRVMODE,
	CMD_PRVTOOL_SELECT,
	CMD_PRVTOOL_DRAW,
	CMD_PRVTOOL_ERASE,

	// Step Record
	CMD_VIEW_DLGBAR_STEPRECORD,			// Transport | Step Record...
	CMD_STEP_WHOLE,
	CMD_STEP_HALF, 
	CMD_STEP_QUARTER,				// 570
	CMD_STEP_EIGHTH,
	CMD_STEP_SIXTEENTH, 
	CMD_STEP_THIRTY2ND, 
	CMD_STEP_SIXTY4TH,
	CMD_STEP_DOTTED, 
	CMD_STEP_DBLDOTTED, 
	CMD_STEP_TICKS, 
	CMD_STEP_TUPLET,
	CMD_STEP_FOLLOWSTEP,			
	CMD_STEP_AUTOADVANCE,			// 580
	CMD_STEP_LINKNOW,				
	CMD_STEP_BACK, 
	CMD_STEP_FWD,  
	CMD_STEP_BEATBACK,
	CMD_STEP_BEATFWD, 
	CMD_STEP_MEASBACK,
	CMD_STEP_MEASFWD,
	CMD_STEP_TOGGLEMODE,
	CMD_TOGGLE_STEP_ACTIVATE,
	CMD_OPEN_CLIP_EFFECTS_BIN,	// 590
	CMD_STEP_PLUS,
	CMD_STEP_DELETEBACK,

	CMD_REALTIME_SET_TIMECODE_AT_CURSOR,
	
	CMD_SNAPTOSCALE_ENABLE,
	CMD_SCALE_MANAGER,
	CMD_SCALE_SNAPSETTINGS,
	CMD_ROOTNOTE_C,
	CMD_ROOTNOTE_CSHARP,
	CMD_ROOTNOTE_D,
	CMD_ROOTNOTE_DSHARP,		// 600
	CMD_ROOTNOTE_E,
	CMD_ROOTNOTE_F,
	CMD_ROOTNOTE_FSHARP,
	CMD_ROOTNOTE_G,
	CMD_ROOTNOTE_GSHARP,
	CMD_ROOTNOTE_A,
	CMD_ROOTNOTE_ASHARP,
	CMD_ROOTNOTE_B,

	CMD_AUDIO_GAIN,
	CMD_AUDIO_REMOVE_DC,

	CMD_FILE_IMPORT_TRACK_TEMPLATE,	// in various menus (More Track Templates...)
	CMD_FILE_EXPORT_TRACK_TEMPLATE,	// Main menu | File | Export

	CMD_GLOBAL_SHOW_HIDE_TRACK_ICONS,	// Main menu | Options | Icons 
	CMD_SHOW_HIDE_TRACK_ICONS,			// Main menu | Options | Icons 
	CMD_TRACK_ICONS_LARGE,				// Main menu | Options | Icons 
	CMD_TRACK_ICONS_SMALL,				// Main menu | Options | Icons 
	CMD_TRACKICONSMENU_SHOWICONSINHEADERS,// Main menu | Options | Icons 
	CMD_TRACKICONSMENU_CUSTOMICONSINHEADERS,// Main menu | Options | Icons 
	CMD_TRACKINSPECTOR_SHOWICONS,		// Main menu | Options | Icons 
	CMD_TRACKINSPECTOR_LARGEICONS,		// Main menu | Options | Icons 
	CMD_TRACKINSPECTOR_SMALLICONS,		// Main menu | Options | Icons 
	CMD_CONSOLE_SHOWICONS,				// Main menu | Options | Icons 
	CMD_CONSOLE_LARGEICONS,				// Main menu | Options | Icons 
	CMD_CONSOLE_SMALLICONS,				// Main menu | Options | Icons 
	CMD_TRACK_LOAD_ICON,					// Main menu | Track | Property | Icons
	CMD_TRACK_REMOVE_ICON,				// Main menu | Track | Property | Icons
	CMD_TRACKVIEW_SHOWINSTRIP,			// options icon menu
	CMD_REBUILDLAYERS,						// Track | Layers | Rebuild Layers
	CMD_COMPACTLAYERS,						// Track | Layers | Compact Layers
	CMD_ROLANDVVOCAL_OPEN_EDITOR,		// View | VVOCAL
	CMD_VIEW_FLOAT_AS_TAB,				// View | E&nable Tabbing for Open Views
	CMD_INSERT_MULTIPLETRACKS,			// Insert | Multi&ple Tracks...
	CMD_RESET_ALL_METERS,
	CMD_MAX_TAB,
	CMD_VIEW_TRACKVIEW,		// 635					// v5 added Track View to View menu

	//SONAR 5.2 new TPRV tool IDs
	CMD_RESERVED58, //CMD_PENCILTOOL_AUTOERASE,			//Auto Erase toggle in PRV
	CMD_RESERVED59, //CMD_INLINEPENCILTOOL_AUTOERASE,	//Auto Erase toggle in Inline PRV
	CMD_INLINEPRVTOOL_SELECT,			//Select tool in Inline PRV
	CMD_INLINEPRVTOOL_DRAW,				//Draw tool in Inline PRV
	CMD_INLINEPRVTOOL_ERASE,	 // 640	//Erase tool in inline PRV

	// SONAR 6 - WOW!
	// Console View (S6)
	CMD_MIXER_MOD_ICONS,	
	CMD_TOGGLE_EQ_MODS,
	CMD_TOGGLE_FX_MODS,
	CMD_TOGGLE_SEND_MODS,
	CMD_MIXER_SHOW_HIDE_TRACKS,
	CMD_MIXER_SHOW_HIDE_BUSES,
	CMD_MIXER_SHOW_HIDE_MAINS,
	CMD_NEXT_STRIP_PAGE,
	CMD_PREV_STRIP_PAGE,	

	CMD_VIEW_SHOWTOOLBARS,	// 650			// S6: View | Show Toolbars
	CMD_USAGE_LOGGER,						// S6: Help | Usage Logger
	CMD_FIT_CONTENT,						// PRV and Inline PRV FIt Content
	CMD_VIEW_TOOLBAR_COMBO1,				// New toolbars
	CMD_VIEW_TOOLBAR_COMBO2,
	CMD_VIEW_TOOLBAR_COMBO3,
	CMD_CLIPS_TOGGLE_AUDIOSNAP,			// turn on/off audio snap based on sel
	CMD_CLIPS_TOGGLE_AUDIOSNAPSRC,		// ditto for snap src (transient pool)
	CMD_CLIPSVIEW_NEXT_TRANSIENT,
	CMD_CLIPSVIEW_PREV_TRANSIENT,
	CMD_FILE_REVERT,		// 660
	CMD_AUDSNAP_AUTOSTRETCH,
	CMD_CLIPSVIEW_SPLIT_TRANSIENTS,
	CMD_CLIPSVIEW_PLAY_TRANSIENT,
	CMD_CLIPSVIEW_SHOWTRANSIENTPOOL,
	CMD_CLIPSVIEW_SHOWTRANSIENTMBT,
	CMD_CLIPSVIEW_SHOWAUDSNAPPALETTE,	// 666
	CMD_CLIPS_VVOCAL,		// EDIT | Create V-Vocal
	CMD_CLIPLOCK_ALL,
	CMD_CLIPLOCK_POSITION,
	CMD_CLIPLOCK_DATA,		// 670
	CMD_PLUGIN_PRESET_INC,
	CMD_PLUGIN_PRESET_DEC,
	CMD_QUICKZOOM_ZOOMIN,
	CMD_QUICKZOOM_ZOOMOUT,
	CMD_MARKMBT,
	CMD_VIEW_TOOLBAR_AUDSNAP,
	CMD_AUDSNAP_INSERT_MARKER,
	CMD_AUDSNAP_RESET_MARKER,
	CMD_CLIPSVIEW_SPLIT_TRANSIENTPOOL,
	CMD_CLIPS_TOGGLE_AUDIOSNAP_SHOWMARKERS,
	CMD_AUDSNAP_SELECTALL,
	CMD_AUDSNAP_SELECTNONE,
	CMD_AUDSNAP_SELECTMOVED,
	CMD_AUDSNAP_SELECTSTRETCHED,
	CMD_AUDSNAP_SELECTDISABLED,
	CMD_AUDSNAP_SELECTENABLED,
	CMD_AUDSNAP_SELECTPROMOTED,
	CMD_TRACK_SHOWAUTOMATEDMUTE,
	CMD_FREEZE_OPTIONS,
	CMD_AUTOMATION_READ_ENABLE,
	CMD_SHOW_VEL_TAILS,
	CMD_SHOWHIDE_CONT_EVENTS,
	CMD_SHOWHIDE_NOTES,
	CMD_DISPLAY_ALL_CONT_EVENTS,
	CMD_REPORT_PROBLEM,
	CMD_HELP_WHATS_NEW,
	CMD_SYNTHRACK_SHOWLARGEICONS,
	CMD_MENU_EDITOR,
	CMD_LEARN_AUTOMAP,
	CMD_OPTIONS_CTRL_SURFACES,
	CMD_AUDSNAP_DELETE_MARKER,
	CMD_AUDSNAP_DISABLE_MARKER,
	CMD_AUDSNAP_PROMOTE_MARKER,
	CMD_AUDSNAP_SNAPTOTRNS,

	// SONAR 6.2
	CMD_XRAY,
	CMD_XRAY_ALL_FX,
	CMD_INPUTQUANTIZE_ENABLE,
	CMD_INPUTQUANTIZE_SETTINGS,
	CMD_RESERVED60, // replaces ID_HEAL_GAPS which was removed.

	CMD_INPUTQUANTIZE_WHOLE,
	CMD_INPUTQUANTIZE_HALF,                 
	CMD_INPUTQUANTIZE_QUARTER,
	CMD_INPUTQUANTIZE_QUARTER_TRP,
	CMD_INPUTQUANTIZE_EIGHTH,  
	CMD_INPUTQUANTIZE_EIGHTH_TRP,
	CMD_INPUTQUANTIZE_SIXTEENTH,
	CMD_INPUTQUANTIZE_SIXTEENTH_TRP,
	CMD_INPUTQUANTIZE_32ND, 
	CMD_INPUTQUANTIZE_32ND_TRP,
	CMD_INPUTQUANTIZE_64TH,   
	CMD_INPUTQUANTIZE_64TH_TRP,
	CMD_INPUTQUANTIZE_128TH,  
	CMD_INPUTQUANTIZE_128TH_TRP,
	CMD_TV_INSERT_MARKERS_FROM_POOL,

	// HS 6
	CMD_IMPORT_CD,
	CMD_EXPORT_CD,

	// SONAR 7
	CMD_REVERT_CLIP,

	CMD_MICROSCOPE_ENABLE,
	CMD_SELECT_CCS_WITH_NOTE,
	CMD_SOLODIM,		// 730
	CMD_VIEW_STEP_SEQ,
	CMD_STEP_SEQ_INSERTROW,
	CMD_STEP_SEQ_DELETEROW,
	CMD_UNLINK_STEP_SEQ,
	CMD_INPUTQUANTIZE_HALF_DOTTED,    
	CMD_INPUTQUANTIZE_HALF_TRP,       
	CMD_INPUTQUANTIZE_QUARTER_DOTTED, 
	CMD_INPUTQUANTIZE_EIGHTH_DOTTED,  
	CMD_INPUTQUANTIZE_SIXTEENTH_DOTTED, 
	CMD_INPUTQUANTIZE_32ND_DOTTED,   
	CMD_INPUTQUANTIZE_64TH_DOTTED,   
	CMD_INPUTQUANTIZE_128TH_DOTTED,  
	CMD_STEP_SEQ_PREV_STEP,
	CMD_STEP_SEQ_NEXT_STEP,
	CMD_STEP_SEQ_STEP_REC,

	// SONAR 8.0
	CMD_EC_LEFT,
	CMD_EC_RIGHT,
	CMD_EC_UP,
	CMD_EC_DOWN,
	CMD_EC_MODE_SELECT,
	CMD_EC_MODE_SCROLL,
	CMD_EC_MODE_EDIT,
	CMD_EC_WHEEL_BTN,
	CMD_EC_WHEEL_LEFT,
	CMD_EC_WHEEL_RIGHT,
	CMD_EC_LEFT_SEL,
	CMD_EC_RIGHT_SEL,
	CMD_EC_UP_SEL,
	CMD_EC_DOWN_SEL,
	CMD_EC_LEFT_CLIP,
	CMD_EC_RIGHT_CLIP,
	CMD_EC_UP_CLIP,
	CMD_EC_DOWN_CLIP,
	CMD_EC_LEFT_SEL_CLIP,
	CMD_EC_RIGHT_SEL_CLIP,
	CMD_EC_UP_SEL_CLIP,
	CMD_EC_DOWN_SEL_CLIP,
	CMD_EC_MODE_NONE,
	CMD_EC_LEFT_SEL_ADD,
	CMD_EC_RIGHT_SEL_ADD,
	CMD_EC_UP_SEL_ADD,
	CMD_EC_DOWN_SEL_ADD,
	CMD_EC_LEFT_SEL_CLIP_ADD,
	CMD_EC_RIGHT_SEL_CLIP_ADD,
	CMD_EC_UP_SEL_CLIP_ADD,
	CMD_EC_DOWN_SEL_CLIP_ADD,

	CMD_TRANSPORT_FAST_REV,			 
	CMD_TRANSPORT_FAST_FWD,
	CMD_REALTIME_PAUSE,
	CMD_TRANSPORT_PLAY,

   CMD_EC_FADE_L,
   CMD_EC_FADE_R,
   CMD_EC_CROP_L,
   CMD_EC_CROP_R,

	CMD_TRACK_EXCLUSIVE_SOLO,

	CMD_EC_Z_IN_H_SEL,
	CMD_EC_Z_OUT_H_SEL,
	CMD_EC_Z_IN_V_SEL,
	CMD_EC_Z_OUT_V_SEL,
	CMD_EC_Z_OUT_H_SMALL_SEL,
	CMD_EC_Z_IN_H_SMALL_SEL,
	CMD_EC_SCROLL_L,
	CMD_EC_SCROLL_R,
	CMD_EC_SCROLL_U,
	CMD_EC_SCROLL_D,
	CMD_EC_SCROLL_SMALL_L,
	CMD_EC_SCROLL_SMALL_R,

	CMD_TRACK_SOLO_OVERRIDE,

   CMD_EC_CENTER,
   CMD_EC_CENTER_CLIP,

	CMD_EC_NUDGE_L,
	CMD_EC_NUDGE_R,
	CMD_EC_NUDGE_U,
	CMD_EC_NUDGE_D,

	CMD_INSERT_SOFTSYNTH_EXP,
	CMD_DELETE_SOFTSYNTH_EXP,
	CMD_SOFTSYNTH_PROPERTIES_EXP,
	CMD_XYP_EDIT_MODE,
	CMD_XHAIR_MODE,
	CMD_SELECT_ALL_AUDIOSNAP,
	CMD_TRANSPORT_LIVE_ADC_OVERRIDE,	// SONAR 8.3
	CMD_PROCESS_GLOBALFX_BYPASS,		// SONAR 8.3
	CMD_VIEW_MATRIX,						// SONAR 8.5
	CMD_AUDIOSNAP_TOOL,					// Transient tool SONAR 8.5. Number 814: (0 - 814 = 815 commands) 
	CMD_EDIT_PREFERENCES,
	CMD_EDIT_PASTE,
	
	// All ID's added recently
	// snap settings
	CMD_SNAP_WHOLE,
	CMD_SNAP_HALF,
	CMD_SNAP_QUARTER,
	CMD_SNAP_EIGHTH,
	CMD_SNAP_EIGHTH_TRIPLET,
	CMD_SNAP_SIXTEENTH,
	CMD_SNAP_SIXTEENTH_TRIPLET,
	CMD_COPY_TRACK_NAME_CLIP,
	CMD_VIEWS_ICONS,                 
	CMD_VIEWS_LIST,                  
	CMD_VIEWS_DETAILS,               
	CMD_VIEWS_FOLDERS,               
	CMD_VIEWS_LISTCMDX_VIEW_LIST,     
	CMD_BROWSER_AUTOPREVIEW,
	CMD_BROWSER_PREVIEWATHOSTTEMPO,
	CMD_BROWSER_LOOPPREVIEW, 
	CMD_BROWSER_AUDIOPREVIEWBUS,
	CMD_BROWSER_SYNTHPREVIEWOUTPUT,
	CMD_GLOBALTOOLS_EDIT, 
	CMD_GLOBALTOOLS_TIMING,          
	CMD_GLOBALTOOLS_SELECT,          
	CMD_GLOBALTOOLS_MOVE,            
	CMD_GLOBALTOOLS_DRAW,            
	CMD_GLOBALTOOLS_FREEHAND,        
	CMD_GLOBALTOOLS_LINE,            
	CMD_GLOBALTOOLS_SINE,            
	CMD_GLOBALTOOLS_TRIANGLE,        
	CMD_GLOBALTOOLS_SQUARE,          
	CMD_GLOBALTOOLS_SAW,             
	CMD_GLOBALTOOLS_RANDOM,          
	CMD_GLOBALTOOLS_ERASE,           
	CMD_GLOBALTOOLS_MUTE,            
	CMD_GLOBALTOOLS_SPLIT,           
	CMD_GLOBALTOOLS_SCRUB,           
	CMD_GLOBALTOOLS_SMART,           
	CMD_GLOBALTOOLS_ZOOM,            
	CMD_VIEW_SONARBROWSER,           
	CMD_PROCESS_APPLYEFFECTS,        
	CMD_SET_DEFAULT_GCPITCH,         
	CMD_PLUGINTYPE_AUDIOEFFECTS,     
	CMD_PLUGINTYPE_MCMDIEFFECTS,      
	CMD_PLUGINTYPE_INSTRUMENTS,      
	CMD_PLUGINTYPE_REWIREDEVICES,    
	CMD_ALWAYS_ECHO_CURR_TRK,        
	CMD_SAVE_SCREENSET,              
	CMD_MANAGE_SCREENSETS,           
	CMD_SCREENSET_BTN,               
	CMD_SCREENSET_NONE,              
	CMD_SCREENSET_01,                
	CMD_SCREENSET_02,                
	CMD_SCREENSET_03,                
	CMD_SCREENSET_04,                
	CMD_SCREENSET_05,                
	CMD_SCREENSET_06,                
	CMD_SCREENSET_07,                
	CMD_SCREENSET_08,                
	CMD_SCREENSET_09,                
	CMD_SCREENSET_10,                
	CMD_ASSIGN_SCREENSET,            
	CMD_MCV_DOCKTOP,                 
	CMD_MCV_DOCKBOTTOM,              
	CMD_TOOLS_SHOWHCMDE,              
	CMD_SNAP_SHOWHCMDE,               
	CMD_TRANSPORT_SHOWHCMDE,          
	CMD_LOOP_SHOWHCMDE,               
	CMD_MIX_SHOWHCMDE,                
	CMD_ACT_SHOWHCMDE,                
	CMD_SCREENSET_SHOWHCMDE,          
	CMD_PERFORMANCE_SHOWHCMDE,        
	CMD_PUNCH_SHOWHCMDE,              
	CMD_SELECT_SHOWHCMDE,             
	CMD_MARKERS_SHOWHCMDE,            
	CMD_EVENT_SHOWHCMDE,              
	CMD_SYNC_SHOWHCMDE,               
	CMD_DBG_MCV_LAYOUT,              
	CMD_DBG_MCV_RECALC,              
	CMD_X_UNLOADSYNTHONDISCONNECT,   
	CMD_ENABLE_SYNTH_MCMDIOUTPUT,     
	CMD_IMPORT_AUDIOCD,              
	CMD_TOOLS_HUD,                   
	CMD_BROWSER_REFRESHVIEW,         
	CMD_BROWSER_DOCKING,             
	CMD_DOCKING_LEFT,                
	CMD_DOCKING_RIGHT,               
	CMD_DOCKING_BOTTOM,              
	CMD_POSITION_HCMDE,               
	CMD_BROWSER_HCMDE,                
	CMD_DOCKING_UNDOCK,              
	CMD_DOCKING_COLLAPSE,            
	CMD_TOOLS_EDIT_CTX,              
	CMD_TOOLS_DRAW_CTX,              
	CMD_TOOLS_ERASE_CTX,             
	CMD_DOCKING_FLOAT,             
	CMD_VIEWS_SHOWALLFILESANDFOLDERS,
	CMD_MCV_FLOAT,
	CMD_VIEW_CONTROLBAR,             
	CMD_REVERT_SCREENSET,            
	CMD_LOCK_SCREENSET,              
	CMD_RENAME_SCREENSET,            
	CMD_TOOLBAR_SYNTHCONNECTED,      
	CMD_IMPORT_SCREENSETS,           
	CMD_COPY_SCREENSET_01,           
	CMD_COPY_SCREENSET_02,           
	CMD_COPY_SCREENSET_03,           
	CMD_COPY_SCREENSET_04,           
	CMD_COPY_SCREENSET_05,           
	CMD_COPY_SCREENSET_06,           
	CMD_COPY_SCREENSET_07,           
	CMD_COPY_SCREENSET_08,           
	CMD_COPY_SCREENSET_09,           
	CMD_COPY_SCREENSET_10,           
	CMD_FX_RENAME,                   
	CMD_FX_SAVE_METAFX_PRESET,       
	CMD_FX_EXTRACT_METAFX_PLUGINS,   
	CMD_FX_LOAD_METAFX_PRESET,       
	CMD_FX_CONVERT_BIN_TO_METAFX,    
	CMD_SNAP_TICKS,                  
	CMD_SNAP_SAMPLES,                
	CMD_SNAP_FRAMES,                
	CMD_SNAP_SECONDS,                
	CMD_HCMDE_CURMODULE,              
	CMD_SHOWALL_MODULE,              
	CMD_MARKER_DROP,                 
	CMD_SYNC_OPTIONS,                
	CMD_STEP_RECORD,                 
	CMD_TOOLS_SELECT,                
	CMD_TOOLS_DRAW,                  
	CMD_TOOLS_REMOVE,                
	CMD_TOOLS_MOVE,                  
	CMD_TOOLS_EDIT,                  
	CMD_TOOLS_SCRUB,                 
	CMD_TOOLS_SMART,                 
	CMD_DOCKING_TOP,                 
	CMD_DOCKING_MULTIVIEW,
	CMD_VOLUME_CMDR,                  
	CMD_VOLUME_TRACKRECORDMETERS,    
	CMD_MIXER_SHOW_HCMDE_AUDIO,       
	CMD_MIXER_SHOW_HCMDE_MCMDI,        
	CMD_MIXER_SHOW_HCMDE_INSTRUMENT,  
	CMD_MIXER_SHOW_HCMDE_MUTED,       
	CMD_MIXER_SHOW_HCMDE_ARCHIVED,    
	CMD_MIXER_SHOW_HCMDE_FROZEN,      
	CMD_X_SNAPMODULE,                
	CMD_VIEW_SHOW,                   
	CMD_VIEW_MCMDIMICROSCOPE,         
	CMD_VIEW_VIEWUNDO,               
	CMD_VIEW_VIEWREDO,               
	CMD_VIEW_UNDO,                   
	CMD_VIEW_REDO,                   
	CMD_OPTIONS_AUTOCROSSFADE,       
	CMD_SHOW_TVGRCMD,                 
	CMD_OPTIONS_AIMASSIST,           
	CMD_OPTIONS_GHOSTEDDATA,         
	CMD_OPTIONS_METEROPTIONS,        
	CMD_GHOST_DATA,                  
	CMD_MCMDI,                        
	CMD_AUDIOSNAP,                   
	CMD_AUDIOSNAP_ZIG,               
	CMD_EDIT_NOTES,                  
	CMD_DRUM_PANE,                   
	CMD_VIEW_INSPECTOR,              
	CMD_HELP_USERFORUM,
	CMD_HELP_VCMDEOS,                 
	CMD_AUDIO_BASICS,                
	CMD_AUDIO_NOSOUND,               
	CMD_AUDIO_CONFIGURE,             
	CMD_AUDIO_RECORDING,             
	CMD_AUDIO_EDITING,               
	CMD_MCMDI_BASICS,                 
	CMD_MCMDI_NOSOUND,                
	CMD_MCMDI_CONFIGURE,              
	CMD_SOFTYNTH_BASIC,              
	CMD_SOFTSYNTH_INSERT,            
	CMD_SOFTSYNTH_SYNTHRACK,         
	CMD_LOOPS_FIND,                  
	CMD_LOOPS_USE,                   
	CMD_MIXING_AUDIO,                
	CMD_MIXING_USING_PLUGINS,        
	CMD_MIXING_USINGOFFLINE_FX,      
	CMD_MIXING_USING_BUSES,          
	CMD_MIXING_BOUNCE,               
	CMD_TROUBLESHOOT_SOUND,          
	CMD_TROUBLESHOOT_REG,            
	CMD_TROUBLESHOOT_FAQ,            
	CMD_MCMDI_EDITING,                
	CMD_ADVANCED_INIFILE,            
	CMD_TOOLS_ZOOM,                  
	CMD_GETTING_STARTED,             
	CMD_CROSSFADE_TYPE,              
	CMD_OPTIONS_DISPLAY,             
	CMD_DISPLAY_VERTICALGRCMDLINES,   
	CMD_DOUBLE_MCMDICLIPS,            
	CMD_MCMDICLIPS_EVENTLISTVIEW,     
	CMD_MCMDICLIPS_STAFFVIEW,         
	CMD_MCMDICLIPS_PIANOROLLVIEW,     
	CMD_MCMDICLIPS_INLINEPIANOROLLVIEW,
	CMD_DOUBLE_AUDIOCLIPS,           
	CMD_MCMDI_SHOWCLIPOUTLINES,       
	CMD_TRACKS_CLONETRACKS,          
	CMD_RESERVED1016,             
	CMD_RESERVED1017, 
	CMD_RESERVED1018,   
	CMD_MCMDI_SHOWVELOCITY,           
	CMD_VCMDEO_THUMBNAILS,            
	CMD_DISPLAY_TRACK_SEPARATORS,   
	CMD_DISPLAY_CLIP_NAMES,          
	CMD_DISPLAY_CLIP_CONTENTS,       
	CMD_SHOW_AUDIO_SCALE,            
	CMD_GRCMDLINES_NONE,              
	CMD_GRCMDLINES_BEHIND_CLIPS,      
	CMD_GRCMDLINES_INFRONTOF_CLIPS,   
	CMD_LEFTCLICK_SETSNOW,           
	CMD_RIGHTCLICK_SETSNOW,          
	CMD_LEFTCLICK_LOCKSSCROLL,       
	CMD_DCLICK_MCMDI_NONE,            
	CMD_MCMDICLIPS_EVENTLIST,         
	CMD_AUDIOCLIPS_NONE,             
	CMD_AUDIOCLIPS_LCV,              
	CMD_CLONE_TRACKS,                
	CMD_TRACKS_HCMDE,
	CMD_TRACK_MGR,                   
	CMD_CONVERT_MCMDI_TO_SHAPES,      
	CMD_SHOW_VELOCITY,               
	CMD_SHOWVEL_SELECTED,            
	CMD_SHOWALLCONTROLLERS,          
	CMD_CONTROLLERLIST,              
	CMD_SELECTCONTROLLERS_NOTES,     
	CMD_SHOW_CONTROLLERHANDLES,     
	CMD_CONTROLLERS,                 
	CMD_ONSTOP_REWIND,               
	CMD_SETNOW_FULLRESTART,          
	CMD_STOP_AT_END,                 
	CMD_SHOW_VELOCITY_SELECTED,      
	CMD_SHOW_VELOCITY_ACTIVE_TRACK,  
	CMD_SHOW_NOTES,                  
	CMD_SHOW_ALL_CTRL,               
	CMD_SHOW_HANDLES,                
	CMD_HCMDE_MUTED_CLIPS,            
	CMD_SHOW_CLIP_OUTLINES,          
	CMD_FONT_FONTA,                  
	CMD_FONT_FONTB,                  
	CMD_FONT_FONTS,                  
	CMD_FONT_HYPHENATE,              
	CMD_HYPHENATE,                   
	CMD_FONTS,                       
	CMD_MIXER_SHOW_HCMDE_WCMDEN,       
	CMD_MIXER_SHOW_HCMDE_NARROW,      
	CMD_SNAPTO,                      
	CMD_SNAPBY,                      
	CMD_RESERVED1066,						// ID_AUTOMATION_LIVE_MOD <= no e
	CMD_DO_NOTHING,                  
	CMD_SVGRCMD_QTR,                  
	CMD_SVGRCMD_8TH,                  
	CMD_SVGRCMD_16TH,                 
	CMD_SVGRCMD_32ND,                 
	CMD_SNAP_THIRTYSECOND,           
	CMD_SNAP_THIRTYSECOND_TRIPLET,   
	CMD_SNAP_SIXTYFOURTH,            
	CMD_SNAP_ONETWENTYEIGHTH,        
	CMD_EDIT_COPY_WITH_DLG,          
	CMD_EDIT_CUT_WITH_DLG,           
	CMD_PITCH_NONE,                  
	CMD_PITCH_A,                     
	CMD_PITCH_ASHARP,                
	CMD_PITCH_B,                     
	CMD_PITCH_C,                     
	CMD_PITCH_CSHARP,                
	CMD_PITCH_D,                     
	CMD_PITCH_DSHARP,                
	CMD_PITCH_E,                     
	CMD_PITCH_F,                     
	CMD_PITCH_FSHARP,                
	CMD_PITCH_G,                     
	CMD_PITCH_GSHARP,
	CMD_PUBLISHER,
	CMD_VIEW_CONTROLBAR_TRANSPORTMCV,
	CMD_VIEW_CONTROLBAR_TRANSPORTMCV_ENABLETABBED,
	CMD_MAKE_INSTRUMENT_TRACK, 
	CMD_SPLIT_INSTRUMENT_TRACK,
	CMD_BROWSER_VIEWS,
	CMD_X_INSERTTRACKFOLDER,
	CMD_CONSOLE_BTN_UNGROUP,         
	CMD_CONSOLE_REMOTE_CONTROL,      
	CMD_CONSOLE_GROUP_PROPS,         
	CMD_CONSOLE_UNGROUP,             
	CMD_CONSOLE_HCMDE_MODULE,         
	CMD_CONSOLE_ADD_AUDIO_TRACK,     
	CMD_CONSOLE_ADD_MCMDI_TRACK,      
	CMD_CONSOLE_SETMIN,              
	CMD_CONSOLE_SETMAX,              
	CMD_CONSOLE_SETSNAPTOCURRENT,    
	CMD_CONSOLE_DISABLEREMOTECONTROL,
	CMD_CONSOLE_AUTOMATION_ARM,      
	CMD_CONSOLE_AUTOMATION_SNAPSHOT, 
	CMD_TV_MDITABS,                  
	CMD_CONSOLE_GROUPS_BASE,         
	CMD_CONSOLE_GROUPS_END,          
	CMD_QS_RECENT_FILE,              
	CMD_TOGGLE_MULTCMDOCK,            
	CMDX_VIEW_SMALLICON,             
	CMDX_VIEW_LARGEICON,             
	CMDX_VIEW_LIST,                  
	CMDX_VIEW_DETAILS,               
	CMDX_VIEW_LINEUP,                
	CMDX_VIEW_BYNAME,                
	CMD_ROLANDVVOCAL_BYPASS,
	CMD_ROLANDVVOCAL_BYPASSALL,
	CMD_ROLANDVVOCAL_REMOVE,

	CMD_FILE_NEW,		// Without asking about template

	CMD_DUR_WHOLE_DOTTED,        
	CMD_DUR_WHOLE,               
	CMD_DUR_HALF_DOTTED,         
	CMD_DUR_WHOLE_TRIPLET,       
	CMD_DUR_HALF,                
	CMD_DUR_QUARTER_DOTTED,      
	CMD_DUR_HALF_TRIPLET,        
	CMD_DUR_QUARTER,             
	CMD_DUR_EIGHTH_DOTTED,       
	CMD_DUR_QUARTER_TRIPLET,     
	CMD_DUR_EIGHTH,              
	CMD_DUR_SIXTEENTH_DOTTED,    
	CMD_DUR_EIGHTH_TRIPLET,      
	CMD_DUR_SIXTEENTH,           
	CMD_DUR_32ND_DOTTED,         
	CMD_DUR_SIXTEENTH_TRIPLET,   
	CMD_DUR_32ND,                
	CMD_DUR_32ND_TRIPLET,

	CMD_CLIPS_CONVERT_TO_STEREO, 
	CMD_CLIPS_CONVERT_TO_MONO,

	CMD_FOCUS_TV, 
	CMD_FOCUS_MV,

	CMD_BROWSE_MEDIA,
	CMD_BROWSE_PLUGINS, 
	CMD_BROWSE_SYNTHRACK,
	CMD_ID_PREV_MDITAB,
	CMD_ID_NEXT_MDITAB,
	CMD_ID_CLOSE_CURRENT_TAB,

	CMD_SNAP_MEASURE,
	CMD_SNAP_TO_BY,

	// prv snap override key bindings
	CMD_PRV_SNAP_MEASURE                 ,
	CMD_PRV_SNAP_WHOLE                   ,
	CMD_PRV_SNAP_HALF                    ,
	CMD_PRV_SNAP_HALF_TRIPLET            ,
	CMD_PRV_SNAP_QUARTER                 ,
	CMD_PRV_SNAP_QUARTER_TRIPLET         ,
	CMD_PRV_SNAP_EIGHTH                  ,
	CMD_PRV_SNAP_EIGHTH_TRIPLET          ,
	CMD_PRV_SNAP_SIXTEENTH               ,
	CMD_PRV_SNAP_SIXTEENTH_TRIPLET       ,
	CMD_PRV_SNAP_THIRTYSECOND            ,
	CMD_PRV_SNAP_THIRTYSECOND_TRIPLET    ,
	CMD_PRV_SNAP_SIXTYFOURTH             ,
	CMD_PRV_SNAP_ONETWENTYEIGHTH         ,
	CMD_LAST_SELECTED							 ,

	//Toggle ProChannel Strip in Console View
	CMD_SHOWCONSOLE_PROSTRIP             ,

	// X1d
	CMD_INSERT_SEND_ASSISTANT,

} SONAR_COMMAND_CMD;
