        //  </summary>
        private async Task RegisterCommandsAsync()
        {
            await AboutCommand.InitializeAsync(this);
            await BuildProgressToolWindowCommand.InitializeAsync(this);
            await CleanupActiveCodeCommand.InitializeAsync(this);
            await CleanupAllCodeCommand.InitializeAsync(this);
            await CleanupOpenCodeCommand.InitializeAsync(this);
            await CleanupSelectedCodeCommand.InitializeAsync(this);
            await CloseAllReadOnlyCommand.InitializeAsync(this);
            await CollapseAllSolutionExplorerCommand.InitializeAsync(this);
            await CollapseSelectedSolutionExplorerCommand.InitializeAsync(this);
            await CommentFormatCommand.InitializeAsync(this);
            await FindInSolutionExplorerCommand.InitializeAsync(this);
            await JoinLinesCommand.InitializeAsync(this);
            await OptionsCommand.InitializeAsync(this);
            await ReadOnlyToggleCommand.InitializeAsync(this);
            await RemoveRegionCommand.InitializeAsync(this);
            await ReorganizeActiveCodeCommand.InitializeAsync(this);
            await SettingCleanupOnSaveCommand.InitializeAsync(this);
            await SortLinesCommand.InitializeAsync(this);
            await SpadeContextDeleteCommand.InitializeAsync(this);
            await SpadeContextFindReferencesCommand.InitializeAsync(this);
            await SpadeContextInsertRegionCommand.InitializeAsync(this);
            await SpadeContextRemoveRegionCommand.InitializeAsync(this);
            await SpadeOptionsCommand.InitializeAsync(this);



            await SpadeRefreshCommand.InitializeAsync(this);
            await SpadeSearchCommand.InitializeAsync(this);
            await SpadeSortOrderAlphaCommand.InitializeAsync(this);
            await SpadeSortOrderFileCommand.InitializeAsync(this);
            await SpadeSortOrderTypeCommand.InitializeAsync(this);
            await SpadeToolWindowCommand.InitializeAsync(this);
            await SwitchFileCommand.InitializeAsync(this);
        }